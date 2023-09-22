#include"../include/Student.h"
#include<iostream>
#include<string>

void Student:: setName(string& n) {
	name = n;
}
void Student::setRollNumber(int rn) {
	rollNumber = rn;
}
void Student::setMarks(float m) {
	marks = m;
}

string Student:: getName(){
	return name;
}

int Student::getRollNumber(){
	return rollNumber;
}

float Student::getMarks(){
	return marks;
}
char Student::getGrade(){
	return grade;
}

void Student::calculateGrade() {
	if (marks >= 90) {
		grade = 'A';
	} else if (marks >= 80) {
		grade = 'B';
	} else if (marks >= 70) {
		grade = 'C';
	} else if (marks >= 60) {
		grade = 'D';
	} else {
		grade = 'F';
	}
}

