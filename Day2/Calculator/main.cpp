#include <QApplication>
#include "calcdlg.h"

int main ( int argc, char **argv ) {

	QApplication theApp(argc,argv);

	CalculatorDlg dlg;
	dlg.show();

	return theApp.exec();
}
