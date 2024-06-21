#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpSocket>
#include <QTcpServer>
#include <QDebug>

class Server : public QObject {
Q_OBJECT
private:
	QTcpServer *pServer;
private slots:
	void onNewConnectionRequest();
signals:
public:
	Server();
	void start();
};

#endif
