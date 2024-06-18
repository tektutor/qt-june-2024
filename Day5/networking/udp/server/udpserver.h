#ifndef __UDPServer_H
#define __UDPServer_H

#include <QDebug>
#include <QObject>
#include <QString>
#include <QUdpSocket>

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
	void sendMesssage(QString);
};

#endif /* __UDPServer_H */
