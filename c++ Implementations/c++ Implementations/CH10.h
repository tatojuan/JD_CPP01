//
//  CH10.h
//  c++ Implementations
//
//  Created by Juan Davila on 5/17/17.
//  Copyright © 2017 Davila. All rights reserved.
//

#ifndef CH10_h
#define CH10_h

#include <iostream>
#include <cctype>       // For toupper()
#include <string>
using namespace std;


enum Animals {RODENT, CAT, DOG, BIRD, REPTILE, HORSE, BOVINE, SHEEP};

struct StudentRec
{
    string firstName;
    string lastName;
    int age;
};
StudentRec me;
void PrintStudent(StudentRec& next);
void PrintMe(StudentRec& me);






void runCh10()
{
 cout << " //////////// I am in CHAPTER 10 //////////// " << endl;
 // Ch 10.2 pg 472
 // ENUMERAND
 // ********************************************************************
 // This program demostrates input/ output of enumerated types.
 // ********************************************************************
 cout << "This program demostrates input/ output of enumerated types." << endl;


 string animalName;
 Animals inPatient;
 cout << "Enter the name of an animal." << endl;
 cout << "Enter Quit to stop." << endl;
 cin >> animalName;
 while((toupper(animalName.at(0))) != 'Q')
    {
        switch(toupper(animalName.at(0)))
        {
            case 'R' : if (toupper(animalName.at(1)) == 'O')
                inPatient = RODENT;
            else
                inPatient = REPTILE;
                break;
            case 'C' : inPatient = CAT;
                break;
            case 'D' : inPatient = DOG;
                break;
            case 'B' : if (toupper(animalName.at(1)) == 'I')
                inPatient = BIRD;
            else
                inPatient = BOVINE;
                break;
            case 'H' : inPatient = HORSE;
                break;
            default : inPatient = SHEEP;
        }
 cout << "You entered ";
 switch(inPatient)
        {
            case RODENT : cout << "Rodent";
                break;
            case CAT : cout << "Cat";
                break;
            case BIRD : cout << "Bird";
                break;
            case REPTILE : cout << "Reptile";
                break;
            case HORSE : cout << "Horse";
                break;
            case BOVINE : cout << "Bovine";
                break;
            case SHEEP : cout << "Sheep";
                break;
            case DOG : cout << "Dog";
                break;
        }
 cout << endl;
 cout << "Enter the name of an animal." << endl;
 cout << "Ehter Quit to stop." << endl;
 cin >> animalName;
 }
 

 // STRUCT EXAMPLE
 // ********************************************************************
 // This is an example for structures and moving through a function
 // ********************************************************************
 cout << "This is an example for structures and moving through a function" << endl;

 StudentRec next;
 me.firstName = "Juan";
 me.lastName = "Davila";
 me.age = 40;
 next.firstName = "Danelle";
 next.lastName = "Davila";
 next.age = 41;
 cout << "The first name is " << me.firstName << endl ;
 cout << "The last name is " << me.lastName << endl ;
 cout << "The age is " << me.age << endl ;
 PrintStudent(next);
 PrintMe(me);

 cout <<  " //////////// End of Chapter 10 //////////// \n\n";
 }


 void PrintStudent(StudentRec& next)
 {
     cout << endl;
     cout << "The first name is " << next.firstName << endl ;
     cout << "The last name is " << next.lastName << endl ;
     cout << "The age is " << next.age << endl ;
 }
 void PrintMe(StudentRec& me)
 {
     cout << endl;
     cout << "The first name is " << me.firstName << endl ;
     cout << "The last name is " << me.lastName << endl ;
     cout << "The age is " << me.age << endl ;
 }







#endif /* CH10_h */
