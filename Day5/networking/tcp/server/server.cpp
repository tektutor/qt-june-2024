#include "server.h"

Server::Server() {
	pServer = new QTcpServer(this);	

	connect(
		pServer,
		SIGNAL( newConnection() ),
		this,
		SLOT( onNewConnectionRequest() )
	);
}

void Server::start() {
	pServer->listen(QHostAddress::Any, 7999);
}

void Server::onNewConnectionRequest() {
	QTcpSocket *pSocket = pServer->nextPendingConnection();

	pSocket->write("Hello client");
	pSocket->flush();
	pSocket->waitForBytesWritten(3000);
	pSocket->close();
}
