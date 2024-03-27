#pragma once
#include <string>
using namespace std;

class Student {
public:
	string name;
	int age;
	double mark;

	string convert() {
		string s = " ";
		s += name;
		s += ": age = " + to_string(age);
		s += ", mark = " + to_string(mark);

		return s;
	}

};
