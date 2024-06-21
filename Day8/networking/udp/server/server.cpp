#include "server.h"

Server::Server() {
	pSocket = new QUdpSocket(this);
}

void Server::start() {
	pSocket->bind(QHostAddress::LocalHost, 2999);
	connect(
		pSocket,
		SIGNAL( readyRead()),
		this,
		SLOT(onMessageReceived())
        );
}

void Server::sendMessage(QString msg) {
	QByteArray buffer = msg.toUtf8();
	pSocket->writeDatagram(buffer.data(), QHostAddress::LocalHost, 3999);
	pSocket->flush();
}

void Server::onMessageReceived() {
#if 0
	QByteArray buffer;
	QHostAddress sender;
	quint16 senderPort;
	while( pSocket->hasPendingDatagrams() ) {
		buffer.resize(pSocket->pendingDatagramSize());
		pSocket->readDatagram(buffer.data(), buffer.size(), &sender,&senderPort);
		qDebug() << QString(buffer.data());
		sendMessage("Msg from Server ...");
	}
#else
	while ( pSocket->hasPendingDatagrams() ) {
		QNetworkDatagram datagram = pSocket->receiveDatagram();
		QByteArray msg = datagram.data();
		qDebug() << QString(msg);
		sendMessage("Message from server ...");
		QThread::sleep(1);
	}
#endif
}

Server::~Server() {
	if (NULL != pSocket) {
		pSocket->close();
		delete pSocket;
	}
}
