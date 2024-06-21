#ifndef SERVER_H
#define SERVER_H

#include <QUdpSocket>
#include <QObject>
#include <QString>
#include <QNetworkDatagram>
#include <QDebug>
#include <QThread>

class Server : public QObject {
Q_OBJECT
private:
	QUdpSocket *pSocket;
private slots:
	void onMessageReceived();
public:
	Server();
	~Server();
	void start();
	void sendMessage(QString);
};

#endif
