#include "client.h"

Client::Client() {
	pSocket = new QUdpSocket(this);
}

void Client::start() {
	pSocket->bind( QHostAddress::LocalHost, 3999 );
	connect(
		pSocket,
		SIGNAL(readyRead()),
		this,
		SLOT(onMessageReceived())
	);
	sendMessage("Message from client ...");
}

Client::~Client() {
	if ( NULL != pSocket) {
		pSocket->close();
		delete pSocket;
	}
}

void Client::sendMessage(QString msg) {
	QByteArray buffer = msg.toUtf8();
	pSocket->writeDatagram(buffer.data(), QHostAddress::LocalHost, 2999);
	pSocket->flush();
}

void Client::onMessageReceived() {
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
		sendMessage("Message from client ...");
		QThread::sleep(1);
	}
#endif
}
