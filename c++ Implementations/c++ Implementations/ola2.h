//
//  ola2.h
//  c++ Implementations
//
//  Created by Juan Davila on 6/2/17.
//  Copyright © 2017 Davila. All rights reserved.
//

#ifndef ola2_h
#define ola2_h

#include <iostream>
#include <fstream>
#include <string>
#include "Roster.h"

using namespace std;


void runOla2()
{
    // Variable declarations
    // This is the course Number
    string courseName =		"CSCI 3110";
    string fileName =		"point.txt";
    string findStudentID =	"";
    // Creating the object = (the array of students)
    Roster studentRoster(courseName);
    
    // Calling the function to read in the roster of students
    studentRoster.readStudentRecord(fileName);
    
    // Printing all students
    studentRoster.printAllStudents();
    // prompting the user for the student's ID to be found
    cout << "Please enter the student's c-number " << endl;
    cin >> findStudentID;
    
    // finding the student from the student roster
    if(!studentRoster.findStudent(findStudentID)) {
        cout << "student " << findStudentID << " was not found " << endl;
        cout << "program stoped " << endl;
        return ;
    }

    return;
}

#endif /* ola2_h */
