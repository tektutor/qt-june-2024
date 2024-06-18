#include "udp.h"

UDP::UDP() {
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

UDP::~UDP() {

}

void UDP::sendMessage(QString msg) {
	
}

void UDP::onMessageReceived() {		
	QByteArrary message;
	message.resize( 
		pSocket->pendingDatagramSize());

	QHostAddress sender;
	quint16 senderPort;

	pSocket->readDatagram(
		message.data(),
		message.size(),
		&sender,
		&senderPort
	);

	qDebug() << "Message from :"
		 << sender.toString();

	qDebug() << "Message Port :"
		 << senderPort;

	qDebug() << "Message: " << message;
}
