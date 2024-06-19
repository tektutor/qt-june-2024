#include <QCoreApplication>
#include "db.h"

int main ( int argc, char ** argv ) {
	QCoreApplication theApp(argc, argv);

	DBLayer db;
	qDebug() << "Initially these are records in tektutor database ...";
	db.printRecords();
	db.updateRecord();
	qDebug() << "Records after updating ...";
	db.printRecords();
	db.deleteRecord();
	qDebug() << "After deleting one record ...";
	db.printRecords();

	return theApp.exec();
}
