#pragma once
struct Student
{
	int studentID;
	int enrolledCourse;
	int lastExam;
};

float averageExam(Student stu[], int size);
int medianExam(Student stu[], int size);
int courseExam(Student stu[], int size, int classID);