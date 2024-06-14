#include "thread.h"

Thread::Thread( QString name ) {
	qDebug() << "Thread " << name << " constructor ...";
	this->name = name;
}

void Thread::run() {
	int count = 0;
	while (count < 30000) {
		++count;
		qDebug() << "Message from " << name<< " thread ...";
		sleep(1);
	}
}

Thread::~Thread() {
	qDebug() << "Thread " << name << " destructor ...";
}
