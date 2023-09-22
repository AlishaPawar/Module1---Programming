#ifndef STUDENT_H_
#define STUDENT_H_
#include<iostream>
#include<string>
using namespace std;
class Student {
private:
	string name;
	int rollNumber;
	float marks;
	char grade;

public:
	void setName(string& n);

	void setRollNumber(int rn);

    void setMarks(float m);

    string getName();

    int getRollNumber();

    float getMarks();

    char getGrade();

    void calculateGrade();
};



#endif /* STUDENT_H_ */
