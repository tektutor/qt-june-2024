#include "udpclient.h"

UDPClient::UDPClient() {
	pSocket = new QUdpSocket(this);
}

void UDPClient::start() {
	pSocket->bind(
		QHostAddress::LocalHost,
		3999
	);
	connect(
		pSocket,
		SIGNAL(readyRead()),
		this,
		SLOT(onMessageReceived())
	);
}

UDPClient::~UDPClient() {
}

void UDPClient::sendMessage(QString msg) {
	QByteArray buffer = msg.toUtf8();
	QHostAddress sender;
	pSocket->writeDatagram(buffer.data(), QHostAddress::LocalHost, 2999);
	pSocket->flush();
}

void UDPClient::onMessageReceived() {		
	while ( pSocket->hasPendingDatagrams() ) {
		QNetworkDatagram datagram = pSocket->receiveDatagram();
		QByteArray msg = datagram.data();
		qDebug() << QString(msg);
		sendMessage("Hello from client");
	}
}
