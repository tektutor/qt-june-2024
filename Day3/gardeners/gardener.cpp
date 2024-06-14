#include "gardener.h"

int Gardener::saplingCount = 15;
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

void Gardener::run() {
	int pitCount=0;
	int count = 0;
	while ( count < saplingCount ) {
		switch ( type ) {
			case DIGGER:
				mutex.lock();
				startWork.wait(&mutex);
				qDebug() << "Digger digged pit " << ++pitCount;
				++count;
				sleep(2);
				diggerCondition.notify_one();
				mutex.unlock();
				break;
			case PLANTER:
				mutex.lock();
				diggerCondition.wait(&mutex);
				qDebug() << "Planter planted in pit " << ++pitCount;
				++count;
				sleep(1);
				planterCondition.notify_one();
				mutex.unlock();
				break;
			case FILLER:
				mutex.lock();
				planterCondition.wait(&mutex);
				qDebug() << "Filler filled the pit " << ++pitCount;
				++count;
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


