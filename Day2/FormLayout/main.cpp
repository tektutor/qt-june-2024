#include <QApplication>
#include "mathdlg.h"

int main ( int argc, char **argv ) {
	QApplication theApp ( argc, argv ); 

	MathDlg dlg;
	dlg.show();

	return theApp.exec();
}
