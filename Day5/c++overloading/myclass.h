#ifndef MYCLASS_H
#define MYCLASS_H

#include <string>
using namespace std;

class MyClass {
private:
	int x;
	string str;
public:
	MyClass( ) {}
	MyClass(int x,string s) {
		this->x = x;
		this->str = s;
	}

	friend ostream& operator << ( ostream &out, MyClass &obj ) {
		out << "X = " << obj.x << endl;
		out << "str = " << obj.str << endl;
		return out;
	}
#if 1
	friend istream& operator >> ( istream &in, MyClass &obj) {
		cout << "Enter the value of x: ";
		in >> obj.x;
		cout << "Enter the value of str: ";
		in >> obj.str;
		return in;
	}
#endif
};

#endif /* MYCLASS_H */ 
