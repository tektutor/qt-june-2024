#include <QCoreApplication>
#include "xmlfile.h"

int main ( int argc, char **argv ) {

	QCoreApplication theApp(argc, argv);

	XMLFile xmlFile("employees.xml");
//	xmlFile.write();

	xmlFile.read();

	return theApp.exec();

}
