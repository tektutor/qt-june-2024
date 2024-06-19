#include "db.h"

DBLayer::DBLayer() {
	db = QSqlDatabase::addDatabase("QMYSQL");			

	db.setHostName("172.17.0.2");
	db.setDatabaseName("tektutor");
	db.setUserName("root");
	db.setPassword("root@123");
}

void DBLayer::printRecords() {
	QString strID, name, duration;
	if ( db.open() ) {
		qDebug() << "DB connected ...";
		QSqlQuery query;
		query.exec ( "SELECT * FROM training");
		while ( query.next() ) {
			strID = query.value(0).toString();
			name = query.value(1).toString();
			duration = query.value(2).toString();

			qDebug() << "ID = " << strID;
			qDebug() << "Name = " << name;
			qDebug() << "Duration = " << duration;
		}
		db.close();
	}
	else
		qDebug() << "Unable to connect to Mysql server";
}

void DBLayer::updateRecord() {
	if ( db.open() ) {
		QSqlQuery query;
		query.exec("UPDATE training SET name='QML Programming' WHERE name='Qt HMI with C++';");
		db.close();
	}
}

void DBLayer::deleteRecord() {
	if ( db.open() ) {
		QSqlQuery query;
		query.exec("DELETE FROM training WHERE name='QML Programming';");
		db.close();
	}
	
}

DBLayer::~DBLayer()  {
}
