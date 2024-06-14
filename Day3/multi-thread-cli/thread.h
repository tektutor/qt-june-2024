#ifndef __THREAD_H 
#define __THREAD_H

#include <QThread>
#include <QString>
#include <QDebug>

class Thread : public QThread {
private:
	QString name;
public:
	Thread(QString);
	~Thread();
	void run();
};

#endif /* __THREAD_H */
