//
//  CH3.h
//  c++ Implementations
//
//  Created by Juan Davila on 5/17/17.
//  Copyright © 2017 Davila. All rights reserved.
//

#ifndef CH3_h
#define CH3_h


#include <stdio.h>
#include <iostream>
#include <cmath>        // sqrt(), fabs(), cos(x) / sin(x) in radians, pow(x, y)
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;




//  pg 93
//  Data types and Declarations


const float FREEZE_PT = 32.0;       // Freezing point of water
const float BOIL_PT = 212.0;        // Boiling point of water

void runCh3()
{
    cout << " //////////// I am in CHAPTER 3 //////////// " << endl;
    
    // *********************************************************************
    //  Ch3.4 pg 99
    //  Freezing boil program
    //  This program computes the midpoint between the
    //  freezing and boil point of water.
    // *********************************************************************
    cout << "Freezing boil program" << endl;
    cout << "This program computes the midpoint between the" << endl;
    cout << "freezing and boil point of water." << endl;
    
    float avgTemp;
    cout << "Water freezes at "<< FREEZE_PT << endl;
    cout << "And boils at "<< BOIL_PT <<" degrees."<< endl;
    avgTemp = FREEZE_PT + BOIL_PT;
    avgTemp = avgTemp / 2.0;
    cout << "Halfway between is ";
    cout << avgTemp << " degrees." << endl;
    cout << "End of program  example \n\n";
    
    
    
    // Ch 3.6 pg 109
    // *********************************************************************
    // Program demostrates Library function calls
    // *********************************************************************
    cout << "Program demostrates Library function calls" << endl;
    
    float alpha;
    float beta;
    alpha = sqrt(7.3 + fabs(-100.0));
    cout << "alpha " << alpha << endl;
    beta = pow(alpha, 2);
    cout << "alpha squared " << beta << endl;
    // output =
    // alpha 10.3586
    // alpha squared 107.3
    cout << "\n\n";
    
    
    // Ch 3.7 pg 113
    // *********************************************************************
    // This program demostrates the use of manipulators
    // *********************************************************************
    cout << "This program demostrates the use of manipulators" << endl;
    
    const int num1 = 1066;
    const int num2 = 1492;
    cout << setw(3) << num1 << setw(5) << num2 << endl;
    cout << num1 << num2;
    cout << setw(4) << num1 << setw(6) << num2 << num1 << endl;
    // putput
    // 1066 1492
    // 106614921066  14921066
    cout << "\n\n";
    
    
    // Ch 3.8 pg 121
    // *********************************************************************
    // String demo
    // *********************************************************************
    cout << "String demo" << endl;
    
    string theString;
    theString = "Abracadabra";
    cout << "Position: " << theString.find('a') << endl;
    // output
    // Position: 3    <--- it counts starting at 0
    cout << "\n\n";
    
    
    // Ch 3.8 pg 122
    // *********************************************************************
    // Substr0ps program
    // this program demostrates find and substr operations
    // *********************************************************************
    cout << "Substr0ps program" << endl;
    cout << "this program demostrates find and substr operations" << endl;
    
    string name = "Juan Ignacio Davila";
    unsigned long index;
    index = name.find(' ');
    cout << "First Name: " << name.substr(0, index) << "  " << index <<  endl;
    // output
    // First name: Juan
    name = name.substr(index+1, name.length()-1);
    cout << index+1 << " " << name.length()-1 << endl;
    index = name.find(' ');
    cout << "Middle Name: " << name.substr(0, index) << "  " << index << endl;
    // output
    // Middle Name: Ignacio
    name = name.substr(index+1, name.length()-1);
    cout << "Last Name: " << name << endl;
    // output
    // Last Name: Davila
    cout << "\n\n";
    
    
    
    // Ch 3.8 pg 124
    // *********************************************************************
    // This program demostrates the use of substr and toupper
    // *********************************************************************
    cout << "This program demostrates the use of substr and toupper" << endl;
    
    string firstName = "juan";
    string lastName = "davila";
    char ch;
    ch = toupper(lastName.at(0));
    cout << "capture first letter in ch: " << ch << endl;
    lastName = ch + lastName.substr(1, lastName.length());
    ch = toupper(firstName.at(0));
    firstName = ch + firstName.substr(1, firstName.length());
    cout << firstName << " " << lastName << endl;
    // output
    // capture first letter in ch: D
    // Juan Davila
    cout << " //////////// End of Chapter 3 //////////// \n\n";
}


#endif /* CH3_h */
