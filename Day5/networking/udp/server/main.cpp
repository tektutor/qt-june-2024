#include <QCoreApplication>
#include "udpserver.h"

int main ( int argc, char **argv ) {
	QCoreApplication theApp(argc, argv);

	UDPServer server;
	server.start();

	return theApp.exec();
}
