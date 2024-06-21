#include <QCoreApplication>
#include "udpclient.h"

int main ( int argc, char **argv ) {
	QCoreApplication theApp(argc, argv);
	
	UDPClient client;
	client.start();
	client.sendMessage("Message from client");

	return theApp.exec();
}
