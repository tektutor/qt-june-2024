#ifndef __UDPServer_H
#define __UDPServer_H

#include <QDebug>
#include <QObject>
#include <QString>
#include <QUdpSocket>
#include <QNetworkDatagram>

class UDPServer : public QObject {
Q_OBJECT
private:
	QUdpSocket *pSocket;
private slots:
	void onMessageReceived();
signals:
public:
	UDPServer();
	~UDPServer();
	void start();
	void sendMessage(QString);
};

#endif /* __UDPServer_H */
