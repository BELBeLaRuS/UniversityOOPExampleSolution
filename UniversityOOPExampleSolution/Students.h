#pragma once
#include <string>
using namespace std;

class Student {
private:
	string name;
	int age;
	double mark;

public:

	Student();
	Student(string nm, int a = 14, double m = 4);

	~Student();

	string getName();

	int getAge();
	void setAge(int a);

	double getMark();
	void setMark(double m);
	string convert();

};
