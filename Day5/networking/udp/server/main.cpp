#include <QCoreApplication>
#include "udpserver.h"

int main ( int arg, char **argv ) {
	QCoreApplication theApp(argc, argv);

	UdpServer server;
	server.start();

	return theApp.exec();
}
