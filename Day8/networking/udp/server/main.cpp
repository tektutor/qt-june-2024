#include <QCoreApplication>
#include "server.h"

int main ( int argc, char **argv ) {
	QCoreApplication theApp(argc,argv);
	
	Server server;
	server.start();

	return theApp.exec();
}
