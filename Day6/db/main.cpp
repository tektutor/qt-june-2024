#include <QCoreApplication>
#include "db.h"

int main ( int argc, char ** argv ) {
	QCoreApplication theApp(argc, argv);

	DBLayer db;
	db.connect();

	return theApp.exec();
}
