#ifndef __EMP_H
#define __EMP_H

#include <QFile>
#include <QDataStream>
#include <QDebug>
#include <QString>
#include <QObject>

class Employee { 
private:
	QString name, title, employer;
	QString empID;
public:
	Employee();
	Employee(QString,QString,QString,QString);
	~Employee();

	friend QDataStream & operator << (QDataStream &out, const Employee &emp) {
		out << emp.empID;
		out << emp.name;
		out << emp.title;
		out << emp.employer;
		return out;
	}

	friend QDataStream& operator >> (QDataStream &in, Employee &emp) {
		in >> emp.empID;
		in >> emp.name;
		in >> emp.title;
		in >> emp.employer;
		return in;
	}

	void save();
	void read();
	void print();
};

#endif /* __EMP_H */
