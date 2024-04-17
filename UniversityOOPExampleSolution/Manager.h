#pragma once
#include "Students.h"
#include "Group.h"

class Manager {
public:
	static double getMaxMark(Group group);

	static double getMinMark(Group group);

	static double CalcAvgMark(Group group);

	static Student getBestStudent(Group group);

	static Student getWorstStudent(Group group);
};