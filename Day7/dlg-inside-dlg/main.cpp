#include <QApplication>
#include "parentdlg.h"

int main(int argc, char **argv) {
	QApplication theApp(argc, argv);

	ParentDlg dlg;
	dlg.show();

	return theApp.exec();
}
