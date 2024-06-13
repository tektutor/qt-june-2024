#include <QApplication>
#include "maindlg.h"

int main ( int argc, char ** argv ) {
	QApplication theApp(argc, argv);

	MainDlg dlg;
	dlg.show();

	return theApp.exec();
}
