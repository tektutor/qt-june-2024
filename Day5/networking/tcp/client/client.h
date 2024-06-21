#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>

class Client : public QObject {
Q_OBJECT
private:
	QTcpSocket *pSocket;
private slots:
	void connected();
	void disconnected();
	void readyRead();
public:
	Client();
	~Client();
	void start();
};

#endif
