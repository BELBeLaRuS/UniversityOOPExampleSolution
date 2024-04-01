#pragma once
#include <string>
using namespace std;

class Student {
public:
	string name;
	int age;
	double* mark;

	// default consrtuctor (конструктор по умолчанию)
	Student() {
		cout << "Default consrtuctor is calling" << endl;
		name = "no name";
		age = 6;
		mark = new double[5];
	}

	//Student(string nm) {
	//	//cout << "consrtuctor sith arguments was calling" << endl;
	//	name = nm;
	//}

	//Student(string nm, int a) {
	//	//cout << "consrtuctor sith arguments was calling" << endl;
	//	name = nm;
	//	age = a;
	//}

	//// canonical consrtuctor (канонический конструктор)
	Student(string nm, int a = 14, double m = 4) {
		//cout << " canonical consrtuctor sith arguments was calling" << endl;
		name = nm;
		age = a;
		mark = new double[5];
	}
	//// copy-constructor(конструкток копирования BETA)

	///*Student(const Student& student) {

	// }*/

	// destuctor (удалитель памяти)

	~Student() {
		cout << "Destructor was calling" << endl;
		// ...
		delete[] mark;
	}


	string convert() {
		string s = "";
		s += name;
		s += ": age = " + to_string(age);
		s += ", mark = " + to_string(mark);

		return s;
	}

};
