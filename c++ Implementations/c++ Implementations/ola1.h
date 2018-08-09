//
//  ola1.h
//  c++ Implementations
//
//  Created by Juan Davila on 5/18/17.
//  Copyright © 2017 Davila. All rights reserved.
//

/*
 Description:
 In this assignment, please write a program that provides a way for you to search and display information of all students in the class. Student records including c# and scores of multiple categories are saved in the file point.dat. Your program should:
 • First, read all student information from the text file and store them in an array.
 • Prompt user to input a valid c#, and the program display all information of the student with the given c#.
 • Then display information of all students.
*/


#ifndef ola1_h
#define ola1_h




// Juan Davila
// OLA 1
// Professor: Dr. Zhijiang Dong
// Class: CSCI3110-001

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Declearing constant to keep scores set to 6.
const int MAX_SCORES = 6;

// struct student to store student IDs and scores
struct Student0{
    string ID;
    float scores[MAX_SCORES];
    
    // Default constructor to ensure initialization
    Student0()
    {
        // Initializing all variable before use and clearing the trash
        ID = "EMPTY ID";
        for (int i = 0; i < MAX_SCORES; i++)
        {
            scores[i] = 0;
        }
    }
};

// Declearing constant for maximum number of students.
const int MAX_STUDENTS = 30;
// function Prototypes
bool readFileIn(string fileName, string& title, Student0 roster[], int MAX_STUDENTS, int& studentCount);
bool printStudent(string title, Student0 roster[], int studentCount, string findStudentID);
void printAllStudent(string title, Student0 roster[], int studentCount);











// Program begins
void runOla1()
{
    cout << "I am in RUNOLA1 function"<< endl;
    
    // Declaring the array of Sudents no more than 30
    Student0 roster[MAX_STUDENTS];
    // Variable declarations
    string title, findStudentID;
    //string fileName = "point.txt";   temp from .dat.................ojo CHANGE
    string fileName = "point.txt";
    int studentCount = 0;
    // Declaring bool flag to see if file opened
    bool found = true;
    
    // Reading in the file, and checking if file opened
    found = readFileIn(fileName, title, roster, MAX_STUDENTS, studentCount);
    
    // if file did not open end program
    if (!found)
        return;
    
    
    
    // Printing all students
    cout << "Printing all of the students from the file" << endl;
    printAllStudent(title, roster, studentCount);
    
    // Asking the user for the student ID to find in the array of students
    cout << "Please enter the student's c-number ";
    cin >> findStudentID;
    
    // if found print one student
    found = printStudent(title = "" , roster, studentCount, findStudentID);
    if (!found)
    {
        cout << "\n Student " << findStudentID << " was not found " << endl;
    }
    cout << "\n" << endl;
    
    
    cout << "This is the end of runOla1 \n\n\n";
    
    return;
}









// function declarations
// Function to read in from the file the student's ID and scores and stored into an array of Students
bool readFileIn(string fileName, string& title, Student0 roster[], int MAX_STUDENTS, int& studentCount)
{
    // Declaring variable to open the file
    ifstream cinFile;
    cinFile.open(fileName.c_str());
    char trash = 0;

    cout << "reading from file" << endl;
    
    
    // Checking to see if the file opens
    if (!cinFile)
    {
        cout << "Could not open this file" << endl;
        return false;
    }
    
    
    // Prime read for the title
    getline(cinFile, title);
    cinFile >> trash;

    // Reading until the end of file
    while (cinFile)
    {
        cinFile >> roster[studentCount].ID;
        for (int i = 0; i < MAX_SCORES; i++)
        {
            cinFile >> roster[studentCount].scores[i];
        }
        studentCount++;
    }
    
    
    // setting the count to the real cound = one less than the while loop
    studentCount--;
    // closing the file
    cinFile.close();
    return true;
}







// If found, will print that studen's ID and scores
bool printStudent(string title, Student0 roster[], int studentCount, string findStudentID)
{
    for (int i = 0; i < studentCount; i++)
    {
        // tring to find the student
        if (findStudentID == roster[i].ID)
        {
            cout << "The student " << findStudentID << " was found" << endl;
            // Printing the title of the student
            cout << title << endl;
            cout << roster[i].ID << "   ";
            // Printing the score for that student
            for (int x = 0; x < MAX_SCORES; x++)
            {
                
                cout << roster[i].scores[x] << " \t";
            }
            return true;
        }
    }
    return false;
}





// Will print all students stored in the array of students
void printAllStudent(string title, Student0 roster[], int studentCount)
{
    cout << title << endl;
    for (int i = 0; i < studentCount; i++)
    {
        // Printing the title of the student
        cout << roster[i].ID << "   ";
        // Printing the score for that student
        for (int x = 0; x < MAX_SCORES; x++)
        {
            cout << roster[i].scores[x] << " \t";
        }
        cout << endl; \
    }
}
// end of program




#endif /* ola1_h */

















