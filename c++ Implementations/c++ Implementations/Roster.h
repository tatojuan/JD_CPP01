/*
 * File:	Roster.h
 * Author:	Zhijiang Dong
 * Course:	CSCI 3110
 * Instructor:	Zhijiang Dong
 * Date:	Oct. 06 2006
 *
 * Purpose: This file is a part of the 1st open lab assignment, which 
 * includes Student.h, Student.cpp, Roster.h, Roster.cpp, 
 * and main.cpp. This file gives the full definition 
 * of the class Roster.
 */

#ifndef __CSCI3110_ROSTER__
#define __CSCI3110_ROSTER__

#include <string>
#include <stdexcept>
#include "Student.h"
using namespace std;

class Roster
{
	public:

		// constructor, the parameter is the course name
		// Create an empty roster, i.e. m_studentNum = 0 for
		// a specific course
		Roster(std::string courseName);

		// This function reads student information from a file
		// The parameter is a file name
		// post-condition: 
		//		m_students contains student information read from the file
		//		m_studentNum is the number of students read from the file	
		bool readStudentRecord( std::string fileName);

		//*****************************************
		//Add your functions here if necessary
		//*****************************************

		// Function to prints all of the students in the roster  
		void printAllStudents(void) const;
		// Printing this student from the roster
		void printStudent(int thisStudent) const;
		// Find one student from the roster and if found print it if not return false
		bool findStudent(string findStudent);


	private:
		static const int	MAX_NUM = 25;			// The maximum # of students of a class
													// Class constant. All objects share the same copy
		std::string			m_courseName;			// THe name of the course
		int					m_studentNum;			// Actual Student #
		Student				m_students[MAX_NUM];	// The array of student objects
		string				m_title;				// Keeping the roster title
};
#endif
