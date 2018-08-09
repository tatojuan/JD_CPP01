// File: Roster.cpp
// Juan Davila 
// Ola2 
// Professor: Dr. Zhijiang Dong
// Course: CSCI 3110

#include  <fstream>
#include "Roster.h"
#include <iostream>
using namespace std;

// This is the constructor 
// Initializing the default constructor with an initializing list
Roster::Roster(string coursename) 
	: m_courseName(coursename) , m_studentNum(0) , m_title("") {}

bool Roster::readStudentRecord(string fileName)
{
		// Declaring variable to store the title of the students scores
		string title;
		m_title = title;
		// Declaring variables to store the student's id and scores
		string id;
		int cla, ola, quiz, homework, exam, bonus;
	
		// Declaring variable to open the file 
		ifstream cinFile;
		cinFile.open(fileName.c_str());
		// Checking to see if the file opens
		if (!cinFile)
		{
			cout << "Could not open this file";
			return false;
		}

		// Prime read to the the title 
		getline(cinFile, title);
		m_title = title;
		// Reading until the end of file
		while (cinFile)
		{
			// Getting the student's id and scores from the file
			cinFile >> id;
			cinFile >> cla;
			cinFile >> ola;
			cinFile >> quiz;
			cinFile >> homework;
			cinFile >> exam;
			cinFile >> bonus;
			// Setting the student's id and scores into the array of students
			m_students[m_studentNum].setID(id);
			m_students[m_studentNum].changeScore(Student::CLA,		cla);
			m_students[m_studentNum].changeScore(Student::OLA,		ola);
			m_students[m_studentNum].changeScore(Student::QUIZ,		quiz);
			m_students[m_studentNum].changeScore(Student::HOMEWORK, homework);
			m_students[m_studentNum].changeScore(Student::EXAM,		exam);
			m_students[m_studentNum].changeScore(Student::BONUS,	bonus);
			// setting the total score for the student
			m_students[m_studentNum].setTotal();
			// setting the letter grade for the student 
			m_students[m_studentNum].setLetterGrade();
			// keeping track of how many students are in the roster array
			m_studentNum++;
		}
		// setting the count to the real cound = one less than the while loop 
		m_studentNum--;
		// closing the file 
		cinFile.close();
		return true;
}


// function to print all of the students 
void Roster::printAllStudents(void) const {
	cout << m_title << endl;
	for (int i = 0; i < m_studentNum; i++)
	{
		printStudent(i);
	}
	return;
}

// Function to print only one student from the roster 
void Roster::printStudent(int thisStudent) const {

	// Printing the student's ID
	cout << m_students[thisStudent].Student::getID()			<< "   ";
	// Printing the scores for that student
	cout << m_students[thisStudent].getScore(Student::CLA)		<< " \t";
	cout << m_students[thisStudent].getScore(Student::OLA)		<< " \t";
	cout << m_students[thisStudent].getScore(Student::QUIZ)		<< " \t";
	cout << m_students[thisStudent].getScore(Student::HOMEWORK) << " \t";
	cout << m_students[thisStudent].getScore(Student::EXAM)		<< " \t";
	cout << m_students[thisStudent].getScore(Student::BONUS)	<< " \t";
	// Printing the student's total and grade 
	cout << m_students[thisStudent].getTotal()					<< " \t";
	cout << m_students[thisStudent].getLetterGrade()			<< " \t";
	cout << endl;
	
}

// Looking for student and if found calling the print student function
bool Roster::findStudent(string findStudent) {
	for (int x = 0; x < m_studentNum; x++)
	{
		if (findStudent == m_students[x].getID()) {
			cout << m_title << endl;
			printStudent(x);
			return true;
		}
	}
	return false;
}

// End of Roster.cpp