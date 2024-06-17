#include "thread.h"

Thread::Thread(QString name) {
	this->name = name;
	//setTerminationEnabled(true);
}

void Thread::run() {
	qDebug() << "Inside Thread::run method ..."; 
	QString msg = name;
	QString tmp;
	int value = 0;

	while ( true ) {
		tmp.setNum(++value);
		msg.append(": message => ");
		msg.append(tmp);
		emit threadMessage( msg );  
		msg = name;
		sleep(1);
	}
}

Thread::~Thread() {
}
