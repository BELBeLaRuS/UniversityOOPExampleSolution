#pragma once
#include "Students.h"
#include "Group.h"

class Manager {
public: 
	double getMaxMark(Group group);

	double getMinMark(Group group);

	double CalcAvgMark(Group group);

	Student getBestStudent(Group group);

	Student getWorstStudent(Group group);
};