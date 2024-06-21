#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QDebug>
#include <QString>
#include <QUdpSocket>
#include <QByteArray>
#include <QNetworkDatagram>
#include <QThread>

class Client : public QObject {
Q_OBJECT
private:
	QUdpSocket *pSocket;
private slots:
	void onMessageReceived();
public:
	Client();
	~Client();
	void start();
	void sendMessage(QString);
};

#endif
