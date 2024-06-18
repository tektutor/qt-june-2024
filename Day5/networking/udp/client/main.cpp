#include <QCoreApplication>
#include "UDP.h"

int main ( int arg, char **argv ) {
	QCoreApplication theApp(argc, argv);

	UDP client;


	return theApp.exec();
}
