#include <QApplication>
#include "dlg.h"

int main ( int argc, char **argv ) {

	QApplication theApp(argc,argv);
	Dlg dlg;
	dlg.show();
	return theApp.exec();
}
