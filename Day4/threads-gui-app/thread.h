#ifndef __THREAD_H 
#define __THREAD_H

#include <QThread>
#include <QString>
#include <QDebug>

class Thread : public QThread {
Q_OBJECT
private:
	QString name;
private slots:
signals:
	void threadMessage(QString);
public:
	Thread(QString);
	~Thread();
	void run();
};


#endif /* __THREAD_H */
