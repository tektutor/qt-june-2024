#include <iostream>
#include "myclass.h"

int main ( ) {

	MyClass obj1(10,"Some String");
	cout << obj1;

	MyClass obj2;
	cin >> obj2;

	cout << obj2;

	return 0;
}
