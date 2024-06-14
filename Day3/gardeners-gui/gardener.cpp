#include "gardener.h"

int Gardener::saplingCount = 5;
QWaitCondition Gardener::diggerCondition;
QWaitCondition Gardener::planterCondition;
QWaitCondition Gardener::startWork;
QMutex Gardener::mutex;

Gardener::Gardener(TYPE_OF_GARDENER type) {
	this->type = type;
	qDebug() << type << ": gardener constructor ...";
}

void Gardener::startGardeningActivities() {
	startWork.notify_one();
}

void Gardener::onUpdateSaplingCount(int count) {
	saplingCount = count;
}

void Gardener::run() {
	int pitCount=0;
	int count = 0;
	QString msg, tmp;

	while ( count < saplingCount ) {
		switch ( type ) {
			case DIGGER:
				mutex.lock();
				startWork.wait(&mutex);
				msg = "Digged digged pit ";
				tmp.setNum ( ++count );
				qDebug() << "Digger digged pit " << ++pitCount;
				emit threadMessage( msg.append( tmp ) );  
				sleep(2);
				mutex.unlock();
				diggerCondition.notify_one();
				break;
			case PLANTER:
				mutex.lock();
				diggerCondition.wait(&mutex);
				msg = "Planter planted in pit ";
				tmp.setNum (++count); 
				qDebug() << "Planter planted in pit " << ++pitCount;
				emit threadMessage( msg.append( tmp ) );
				sleep(1);
				mutex.unlock();
				planterCondition.notify_one();
				break;
			case FILLER:
				mutex.lock();
				planterCondition.wait(&mutex);
				qDebug() << "Filler filled the pit " << ++pitCount;
				msg = "Filler filled the pit ";
				tmp.setNum ( ++count );
				emit threadMessage( msg.append( tmp ) );
				sleep(2);
				mutex.unlock();
				startWork.notify_one();
				break;
		}
	}
}

Gardener::~Gardener() {
	qDebug() << type << ": gardener destructor ...";
}


