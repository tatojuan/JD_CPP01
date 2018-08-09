//
//  CH7.h
//  c++ Implementations
//
//  Created by Juan Davila on 5/18/17.
//  Copyright © 2017 Davila. All rights reserved.
//

#ifndef CH7_h
#define CH7_h
#include <iostream>
#include <cctype>           // This is for isalpha()
#include <string>
using namespace std;


void runCh7()
{
 cout << " //////////// I am in CHAPTER 7 //////////// " << endl;
    
 // Ch 7.3 pg 317
 // **********************************************************************
 // CharCounts program
 // This program counts the number of letters, periods, question
 // marks, and exclamation marks found in the first 100 input characters
 // Assumption: Input consists of at least 100 characters
 // **********************************************************************
 // EXAMPLE OF SWITCH STATEMENT
    
 cout << "CharCounts program" << endl;
 cout << "This program counts the number of" << endl;
 cout << "letters a-z" << endl;
 cout << "periods ... " << endl;
 cout << "question marks ???" << endl;
 cout << "exclamation marks !!! " << endl;
 cout << "found in the first 100 input characters" << endl;
 cout << "Assumption: Input consists of at least 100 characters" << endl;
 cout << "EXAMPLE OF SWITCH STATEMENT" << endl;
    
 // char inChar;
 string userInput = "";
 int  loopCount;
 int  letterCount = 0;
 int  periodCount = 0;
 int  questCount  = 0;
 int  exclamCount = 0;
    
 cout << "Enter your text: " << endl;
    cin >> userInput;
    for(loopCount = 1; loopCount <= userInput.length(); loopCount++)
 {
     // cin.get(inChar);
     
     if(isalpha(userInput[loopCount]))
         letterCount++;
     else
         switch(userInput[loopCount])
         {
             case '.' : periodCount++;
                 break;
             case '?' : questCount++;
                 break;
             case '!' : exclamCount++;
                 break;
             default:;
         }
     
 }
    
 cout << endl;
 cout               << "Input contained" << endl
 << letterCount     << " Letters" << endl
 << periodCount     << " Periods" << endl
 << questCount      << " question marks" << endl
 << exclamCount     << " exclamation marks" << endl;
  

 cout << " //////////// End of Chapter 7 //////////// \n\n";
}


#endif /* CH7_h */
