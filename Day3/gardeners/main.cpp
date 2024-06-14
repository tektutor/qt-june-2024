#include <QCoreApplication>
#include "gardener.h"

int main ( int argc, char **argv ) {
	QCoreApplication theApp(argc,argv);

	Gardener digger(TYPE_OF_GARDENER::DIGGER);
	Gardener planter(TYPE_OF_GARDENER::PLANTER);
	Gardener filler(TYPE_OF_GARDENER::FILLER);

	planter.start();
	filler.start();
	digger.start();

	QThread::sleep(3);
	Gardener::startGardeningActivities();

	return theApp.exec();
}
