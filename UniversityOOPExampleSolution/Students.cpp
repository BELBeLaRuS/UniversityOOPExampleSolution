#include "Students.h"

// static class components
int Student::count = 0;

int Student::getCount() {
	return count;
}

// dynamic class components

// default consrtuctor (конструктор по умолчанию)
Student::Student() : Student("no_name", 6, 4) {
	//cout << "Default consrtuctor was calling" << endl;
	/*name = "no name";
	age = 6;
	mark = 4;*/
}

Student::Student(string name) : name(name) {
	//cout << "consrtuctor sith arguments was calling" << endl;
	name = name;

}

//Student(string nm, int a) {
//	//cout << "consrtuctor sith arguments was calling" << endl;
//	name = nm;
//	age = a;
//}

//// canonical consrtuctor (канонический конструктор)
Student::Student(string name, int age, double mark) 
	: name(name), age(age), mark(mark) {
	count++;
	//cout << " canonical consrtuctor sith arguments was calling" << endl;
}
//// copy-constructor(конструкток копирования BETA)

///*Student(const Student& student) {

// }*/

// destuctor (удалитель памяти)
Student::~Student() {
	//	cout << "Destructor was calling" << endl;
	//	// ...
	count--;
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

void Student::setAge(int age) {
	if (age > MIN_AGE && age < MAX_AGE) {
		this->age = age;
	}
}

double Student::getMark() {
	return mark;
}

void Student::setMark(double mark) {
	if (mark >= MIN_MARK && mark <= MAX_MARK) {
		this->mark = mark;
	}
}

string Student::convert() {
	string s = "";
	s += name;
	s += ": age = " + to_string(age);
	s += ", mark = " + to_string(mark);

	return s;
}

