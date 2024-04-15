#include "Group.h"

bool Group::add(Student st) {
	if (size < DEFAULT_SIZE) {
		list[size++] = st;
		return size;
	}
	else {
		return false;
	}
}
int Group::getSize() {
	return size;
}

Student Group::get(int index) {
	if (index >= 0 && index < size) {
		return list[index];
	}
	return Student();
}

string Group::convertTostring() {
	string s = "Group of students:\n";
	for (int i = 0; i < size; i++) {
		s += list[i].convert() + "\n";
	}
	return s;
}
