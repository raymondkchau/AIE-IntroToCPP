#include "student.h"
#include <iostream>

float averageExam(Student stu[], int size)
{
	float sum = 0.0f;
	for (int i = 0; i < size; i++)
	{
		sum += stu[i].lastExam;
	}

	return sum / size;
}

int medianExam(Student stu[], int size)
{
	int i, j;
	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size - i - 1; ++j)
		{
			if (stu[j].lastExam > stu[j + 1].lastExam)
			{
				stu[j].lastExam = stu[j].lastExam + stu[j + 1].lastExam;
				stu[j + 1].lastExam = stu[j].lastExam - stu[j + 1].lastExam;
				stu[j].lastExam = stu[j].lastExam - stu[j + 1].lastExam;
			}
		}
	}

	int median = ((size + 1) / 2);

	if (size % 2 == 0)
	{
		int midIdx = size / 2;
		float lhs = stu[midIdx - 1].lastExam;
		float rhs = stu[midIdx].lastExam;

		return (lhs + rhs) / 2.0f;
	}
	else
	{
		return stu[size / 2].lastExam;
	}
}

int courseExam(Student stu[], int size, int classID)
{
	int classTally = 0;
	for (int i = 0; i < size; i++)
	{
		if (stu[i].enrolledCourse == classID)
		{
			classTally++;
		}
	}

	return classTally;
}