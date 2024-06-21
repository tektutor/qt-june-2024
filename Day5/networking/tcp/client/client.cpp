#include "client.h"

Client::Client() {
	pSocket = new QTcpSocket(this);

	connect(
		pSocket,
		SIGNAL(connected()),
		this,
		SLOT(connected())
	);
	connect(
		pSocket,
		SIGNAL(diconnected()),
		this,
		SLOT(diconnected())
	);
	connect(
		pSocket,
		SIGNAL(readyRead()),
		this,
		SLOT(readyRead())
	);
}

void Client::connected() {
	qDebug() << "Connected with server ...";
}

void Client::disconnected() {
	qDebug() << "Disconnected from server ...";
}

void Client::start() {
    pSocket->connectToHost(QHostAddress("127.0.0.1"), 7999);
}

void Client::readyRead() {
	QByteArray buffer = pSocket->readAll();
	qDebug() << buffer;
	pSocket->write( QByteArray("Client acknowledges receipt of server msg ...") );
}

Client::~Client() {
	pSocket->close();
	delete pSocket;
}
