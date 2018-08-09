//
//  CH1.h
//  c++ Implementations
//
//  Created by Juan Davila on 5/16/17.
//  Copyright © 2017 Davila. All rights reserved.
//

#ifndef CH1_h
#define CH1_h

#include <iostream>
using namespace std;

void hello(){
    // insert code here...
    // Without using the using namespace std line
    std::cout << "Hello, World!\n";
    cout <<"Hello Universe!\n\n";
    cout <<"skiped 1 line " << endl;
    cout << "End of program  example \n\n";
}

bool IsLeapYear( int year );


void runCh1 (int user_year)
{
    cout << " //////////// I am in CHAPTER 1 //////////// " << endl;
    
    // 1.5 exercise page 33
    
    
    
    int year = user_year;
    int check;
    
    cout << "Entering this year " << user_year << endl;
    // cout <<"Please enter in a year number: ";
    // cin >> year;
    check = year % 4;
    if(check != 0)
    {
        cout << "this year is not a leap year 400\n";
    }
    else if ( year % 100 == 0 || year % 400 != 0)
    {
        cout << "this year a leap year \n";
    }
    
    
    if(IsLeapYear( year ))         // Testing for true or false for leap year
        cout << year << " Is a Leap year." << endl;
    else
        cout << year << " Is not a leap year." << endl;
    
    
    
    cout << " //////////// End of Chapter 1 //////////// \n\n";
    
}


bool IsLeapYear( int year )
{
    cout << "In bool function " << endl;
    
    if( year % 4   != 0 )
        return false;
    if( year % 100 != 0 )
        return true;
    if( year % 400 != 0 )
        return false;
    
    return true;
}




#endif /* CH1_h */
