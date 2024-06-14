#include <QCoreApplication> //Recommended best practice
//#include <qcoreapplication.h> - Not recommended
#include "thread.h"

int main ( int argc, char **argv ) {
	QCoreApplication theApp(argc,argv);

	Thread t1("Thread 1");
	Thread t2("Thread 2");
	Thread t3("Thread 3");

	t1.start();
	t2.start();
	t3.start();

	return theApp.exec();
}
