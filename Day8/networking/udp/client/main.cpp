#include <QCoreApplication>
#include "client.h"

int main ( int argc, char **argv ) {
	QCoreApplication theApp(argc,argv);
	
	Client client;
	client.start();

	return theApp.exec();
}
