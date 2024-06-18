#include "employee.h"

Employee::Employee() { }

Employee::Employee( 
	QString empID,
	QString name,
	QString title,
	QString employer
) {
	this->empID = empID;
	this->name  = name;
	this->title = title;
	this->employer = employer;
}

void Employee::read() {
	QFile file("employee.bin");
	file.open(QFile::ReadOnly);

	QDataStream in(&file);
	in.setVersion(QDataStream::Qt_5_1);

	//Populating the employee object from file employee.bin
	Employee e;
	in >> e;
	e.print();

	file.close();
}

void Employee::print() {
	qDebug() << "Employer    : " << employer;
	qDebug() << "Employee ID : " << empID;
	qDebug() << "Employee Name : " << name;
	qDebug() << "Designation   : " << title;
}

void Employee::save() {
	QFile file( "employee.bin" );
	file.open( QFile::WriteOnly );
	
	QDataStream out(&file);
	out.setVersion(QDataStream::Qt_5_1);

	out << *this;

	file.flush();
	file.close();
}

Employee::~Employee() { }
