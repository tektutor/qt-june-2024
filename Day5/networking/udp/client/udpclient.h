#ifndef __UDPCLIENT_H
#define __UDPCLIENT_H

#include <QDebug>
#include <QObject>
#include <QString>
#include <QUdpSocket>
#include <QByteArray>
#include <QNetworkDatagram>

class UDPClient : public QObject {
Q_OBJECT
private:
	QUdpSocket *pSocket;
private slots:
	void onMessageReceived();
signals:
public:
	UDPClient();
	void start();
	~UDPClient();
	void sendMessage(QString);
};

#endif /* __UDPCLIENT_H */
