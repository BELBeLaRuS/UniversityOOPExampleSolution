#include <iostream>
#include "Manager.h"
#include "Students.h"

int main() {
	Student st1{ "Alex", 14, 9 };
	Student st2{ "Alice", 14, 7 };
	Student st3{ "Steve", 15, 10 };
	Student st4{ "Matvey", 14, 6 };
	Student st5{ "Pablo", 14, 4 };

	cout << st1.convert() << endl;
	cout << st2.convert() << endl;
	cout << st3.convert() << endl;
	cout << st4.convert() << endl;
	cout << st5.convert() << endl;

	const int size = 5;

	Student Students[size] = { st1, st2, st3, st4, st5 };
	Manager manager;

	cout << "Best mark is: " << manager.getMaxMark(Students, size) << endl;
	cout << "Worst mark is: " << manager.getMaxMark(Students, size) << endl;

	Student best = manager.getBestStudent(Students, size);
	cout << "First best student is: " << best.convert() << endl;

	Student worst = manager.getWorstStudent(Students, size);
	cout << "First worst student is: " << worst.convert() << endl;

	cout << "Average mark of students is: " << manager.CalcAvgMark(Students, size) << endl;


	return 0;
}
