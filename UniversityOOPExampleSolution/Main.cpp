#include <iostream>
#include "Students.h"

int main() {
	Student st1;
		
	st1.name = "Alex";
	st1.age = 14;
	st1.mark = 9;

	cout << st1.convert() << endl;

	return 0;
}
