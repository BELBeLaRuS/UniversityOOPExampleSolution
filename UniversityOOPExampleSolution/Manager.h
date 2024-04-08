#pragma once
#include "Students.h"
using namespace std;

class Manager {
public: 
	double getMaxMark(Student* list, int length) {
		double max = list[0].getMark;

		for (int i = 1; i < length; i++)
		{
			if (list[i].getMark > max) {
				max = list[i].getMark;
			}
		}

		return max;
	}

	double getMinMark(Student* list, int length) {
		double min = list[0].getMark;

		for (int i = 1; i < length; i++)
		{
			if (list[i].getMark < min) {
				min = list[i].getMark;
			}
		}

		return min;
	}

	double CalcAvgMark(Student* list, int length) {
		double avg = 0;

		for (int i = 0; i < length; i++)
		{
			avg += list[i].getMark;
		}

		return avg / length;
	}

	Student getBestStudent(Student* list, int length) {
		double mark = getMaxMark(list, length);
		Student st;

		for (int i = 0; i < length; i++)
		{
			if (list[i].getMark == mark) {
				st = list[i];
				break;
			}
		}

		return st;
	}

	Student getWorstStudent(Student* list, int length) {
		double mark = getMinMark(list, length);
		Student st;

		for (int i = 0; i < length; i++)
		{
			if (list[i].getMark == mark) {
				st = list[i];
				break;
			}
		}

		return st;
	}
};