#include "Students.h"


// default consrtuctor (конструктор по умолчанию)
Student::Student() {
	//cout << "Default consrtuctor was calling" << endl;
	name = "no name";
	age = 6;
	mark = 4;
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
Student::Student(string nm, int a = 14, double m = 4) {
	//cout << " canonical consrtuctor sith arguments was calling" << endl;
	name = nm;
	age = a;
	mark = m;
}
//// copy-constructor(конструкток копирования BETA)

///*Student(const Student& student) {

// }*/

// destuctor (удалитель памяти)
Student::~Student() {
	//	cout << "Destructor was calling" << endl;
	//	// ...
}

string Student::getName() {
	return name;
}

/*void setName(string nm) {
	name = nm;
}*/

int Student::getAge() {
	return age;
}

void Student::setAge(int a) {
	if (a > 0 && a < 100) {
		age = a;
	}
}

double Student::getMark() {
	return mark;
}

void Student::setMark(double m) {
	if (m >= 0 && m <= 10) {
		mark = m;
	}
}

string Student::convert() {
	string s = "";
	s += name;
	s += ": age = " + to_string(age);
	s += ", mark = " + to_string(mark);

	return s;
}

