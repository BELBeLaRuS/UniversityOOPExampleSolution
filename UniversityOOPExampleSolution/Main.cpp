#include <iostream>
#include "Students.h"

int main() {
	Student st1("Alex");
	Student st2("Potter", 14, 9);
	Student st3("Alice", 15, 10);
	Student st4("Peter", 13, 7);

	/*st1.name = "Alex";
	st1.age = 14;
	st1.mark = 9;

	st2.name = "Potter";
	st2.age = 16;
	st2.mark = 10;

	st3.name = "Alice";
	st3.age = 13;
	st3.mark = 7;*/

	cout << st1.convert() << endl;
	cout << st2.convert() << endl;
	cout << st3.convert() << endl;
	cout << st4.convert() << endl;

	return 0;
}
