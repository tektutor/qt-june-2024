#include <QCoreApplication>
#include "udpclient.h"

int main ( int argc, char **argv ) {
	QCoreApplication theApp(argc, argv);
	
	UDPClient client;
	client.start();

	return theApp.exec();
}
