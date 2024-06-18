#include <QCoreApplication>
#include "employee.h"

int main(int argc, char **argv) {

	QCoreApplication theApp(argc,argv);

	Employee jegan("1234", "Jegan", "Software Consultant", "TekTutor");
	jegan.save();

	Employee employee;	
	employee.print();
	employee.read();

	return theApp.exec();

}

