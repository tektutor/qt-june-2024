#ifndef DB_H
#define DB_H

#include <QObject>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>

class DBLayer : public QObject {
Q_OBJECT
private:
	QSqlDatabase db;
public:
	DBLayer();
	~DBLayer();
	void printRecords();
	void updateRecord();
	void deleteRecord();
};


#endif /* DB_H */
