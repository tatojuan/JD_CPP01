//
//  CH2.h
//  c++ Implementations
//
//  Created by Juan Davila on 5/17/17.
//  Copyright © 2017 Davila. All rights reserved.
//

#ifndef CH2_h
#define CH2_h


#include <iostream>
#include <string>
using namespace std;



// 2.1 Square and cube functions


int Square(int n)
{
    return n*n;
}

int Cube(int n)
{
    return n*n*n;
}


// Constant Declarations outside of function
const string BORDER = "**************************************";
const string First = "Juan";
const string Last = "Davila";
const char INITIAL = 'I';
const string MESSAGE = "Good Morning";

const string WHITE = "        ";
const string BLACK = "********";



// FUNCTION START ////////////////////////////////////////
void runCh2()
{
    cout << " //////////// I am in CHAPTER 2 //////////// " << endl;
    // This program is an example of value retuning functions
    cout << "example of a value returning function " << endl;
    cout << "The square of 27 is " << Square(27) << endl;
    cout << "The Cube of 27 is " << Cube(27) << endl;
    cout << "End of program  example \n\n";
    
    
    
    
    // Constant declarations
    cout << "example of constant declaration in the function " << endl;
    const string NAME = "Juan Davila";
    //const char INITIAL = 'I';
    const float TAX_RATE = 9.75;
    //float houlyWage;
    //int numberOfDependents;
    string jobDescription;
    cout << NAME <<" lives int Tn with a tax rate of "<< TAX_RATE << "%\n";
    cout << "End of program  example \n\n";
    
    
    
    
    
    // Ch2 pg 62
    // Using constant declarations outside of the Function
    cout << "example of constant declaration outside of the function " << endl;
    cout << "\n\n" ;
    string outMessage ;
    cout << BORDER << endl;
    outMessage = MESSAGE+" to "+"Mr. "+First+" "+INITIAL+". "+Last;
    cout << outMessage+"!\n";
    cout << BORDER << endl;
    // this is the output for this code
    //**************************************
    //Good Morning to Mr. Juan I. Davila!
    //**************************************
    
    
    //------------------------------------
    // 2.2
    // ch 2.2 pg 67
    // Types of statements:
    // NullStatement
    // Declaration
    // AssignmentStatement
    // OutputStatement
    // Block
    
    
    
    // 2.4 pg 79
    // This program prints a checker board
    
    
    for(int x=0; x<4; x++)
    {
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<4; j++)
            {
                cout << WHITE+BLACK;
            }
            cout << endl;
        }
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<4; j++)
            {
                cout << BLACK+WHITE;
            }
            cout << endl;
        }
    }
    cout << " //////////// End of Chapter 2 //////////// \n\n";
}




#endif /* CH2_h */
