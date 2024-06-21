#include "udpserver.h"

UDPServer::UDPServer() {
	pSocket = new QUdpSocket(this);
}

void UDPServer::start() {
	pSocket->bind(
		QHostAddress::LocalHost,
		2999
	);
	connect(
		pSocket,
		SIGNAL(readyRead()),
		this,
		SLOT(onMessageReceived())
	);
}


UDPServer::~UDPServer() {
}

void UDPServer::sendMessage(QString msg) {
	QByteArray buffer = msg.toUtf8();
	QHostAddress sender;
	pSocket->writeDatagram(buffer.data(), QHostAddress::LocalHost, 3999);
}

void UDPServer::onMessageReceived() {		
	while ( pSocket->hasPendingDatagrams() ) {
		QNetworkDatagram datagram = pSocket->receiveDatagram();
		QByteArray msg = datagram.data();
		qDebug() << QString(msg);
		sendMessage("Server received your message");
	}
}
