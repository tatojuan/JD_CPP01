// File: Student.cpp
// Juan Davila 
// Ola2 
// Professor: Dr. Zhijiang Dong
// Course: CSCI 3110

#include  <fstream>
#include "Student.h"
#include <iostream>
using namespace std;

// This is the default constructor for the Student Class
Student::Student(void){
	m_id =				"";
	m_score[CLA] =		0;
	m_score[OLA] =		0;
	m_score[QUIZ] =		0;
	m_score[HOMEWORK] = 0;
	m_score[EXAM] =		0;
	m_score[BONUS] =	0;
	m_total =			0;
	m_letterGrade =		'0';
}

// Getting the student's id 
string Student::getID(void) const {
	return m_id;
}

// Setting the student's id
void Student::setID(string id) {
	m_id = id;
	return;
}

// Assagning the student score to the right array possition 
void Student::changeScore(const ScoreType thisScore, const int score) {
	m_score[thisScore] = score;
	return;
}

// Getting the students score 
int  Student::getScore(const ScoreType thisScore) const {
	return m_score[thisScore];
}

// Setting the total score for the student 
void Student::setTotal() {
	m_total = m_score[CLA] + m_score[OLA] + m_score[QUIZ] 
		+ m_score[HOMEWORK] + m_score[EXAM] + m_score[BONUS];
	return;
}

// Getting the total score for the students 
int Student::getTotal(void) const {
	return m_total;
}

// Function to assign the letter grade for the student 
void Student::setLetterGrade() {

	if (m_total >= 90) {
		m_letterGrade = 'A';
	}
	else if (m_total >= 90 && m_total >= 80){
		m_letterGrade = 'B';
	}
	else if (m_total >= 80 && m_total >= 70){
		m_letterGrade = 'C';
	}
	else if (m_total >= 70 && m_total >= 60){
		m_letterGrade = 'D';
	}
	else {
		m_letterGrade = 'F';
	}
	return;
}

// Function to return the letter grade of the student
char Student::getLetterGrade(void) const {
	return m_letterGrade;
}

// End of Student.cpp