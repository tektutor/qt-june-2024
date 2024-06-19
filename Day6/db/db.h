#ifndef DB_H
#define DB_H

#include <QObject>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>

class DBLayer : public QObject {
Q_OBJECT
private:
public:
	DBLayer();
	~DBLayer();
	void connect();
	void disconnect();
};


#endif /* DB_H */
