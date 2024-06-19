#include "db.h"

DBLayer::DBLayer() {
}

void DBLayer::connect() {
	QString strID, name, duration;
	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");			

	db.setHostName("172.17.0.2");
	db.setDatabaseName("tektutor");
	db.setUserName("root");
	db.setPassword("root@123");
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
	}
	else
		qDebug() << "Unable to connect to Mysql server";

}

void DBLayer::disconnect() {
}


DBLayer::~DBLayer()  {
}
