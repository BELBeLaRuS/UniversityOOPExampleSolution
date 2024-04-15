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
	Student(string name, int age = 14, double mark = 4);

	~Student();

	string getName();

	int getAge();
	void setAge(int age);

	double getMark();
	void setMark(double mark);
	string convert();

};
