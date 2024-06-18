#include "udp.h"

UDPServer::UDPServer() {
	pSocket = new QUdpSocket(this);

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
	
}

void UDPServer::onMessageReceived() {		
	QByteArrary message;

	while ( pSocket->hasPendingDatagrams() ) {
		QNetworkDatagram datagram = pSocket->receiveDatagram();
		QByteArray msg = datagram.data();
		qDebug() << msg;
	}
}
