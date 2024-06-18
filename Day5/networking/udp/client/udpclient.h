#ifndef __UDP_H
#define __UDP_H

#include <QDebug>
#include <QObject>
#include <QString>
#include <QUdpSocket>

class UDP : public QObject {
Q_OBJECT
private:
	QUdpSocket *pSocket;
private slots:
	void onMessageReceived();
signals:
public:
	UDP();
	~UDP();
	void sendMesssage(QString);
};

#endif /* __UDP_H */
