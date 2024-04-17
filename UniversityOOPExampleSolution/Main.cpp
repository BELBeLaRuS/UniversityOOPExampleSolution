#include <iostream>
#include "Manager.h"

void test() {
	Student st1{ "Alex", 14, 9 };
	Student st2{ "Alex", 14, 9 };
	Student st3{ "Alex", 14, 9 }; 
	Student st4{ "Alex", 14, 9 };
}

int main() {
	test();
	Student st1{ "Alex", 14, 9 };
	Student st2{ "Alex", 14, 9 };
	Student st3{ "Alex", 14, 9 };
	



	cout << Student::getCount()<< endl;
	
	return 0;
}