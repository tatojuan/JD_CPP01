//
//  CH6.h
//  c++ Implementations
//
//  Created by Juan Davila on 5/17/17.
//  Copyright © 2017 Davila. All rights reserved.
//

#ifndef CH6_h
#define CH6_h

#include <iostream>
#include <string>
using namespace std;

void runCh6()
{
 cout << " //////////// I am in CHAPTER 6 //////////// " << endl;
 // Ch 6.3 pg 247
 // **********************************************************************
 // This program demostrates a count-controlled loop
 // **********************************************************************

 cout << "This program demostrates a count-controlled loop" << endl;
 int loopCount;
 loopCount = 1;
 while(loopCount <= 10)
 {
     cout << "Hello! " << endl;
     loopCount = loopCount + 1;
 }
 cout << "\n\n";
    
    
    
 // Ch 6.3 pg 257
 // **********************************************************************
 // This program reads and sum odd numbers until 10 numbers have been read
 // **********************************************************************
 cout << "This program reads and sum odd numbers until 10 numbers have been read" << endl;
 
 int count = 0;
 int sum = 0;
 bool lessThanTen = true;
 int number;
 string trash;
 cout << "Enter a data set that contains at least 10 odd numbers" << endl;
 
 while(lessThanTen)
 {
    cin >> number;
    if(number % 2 == 1)
    {
        count++;
        sum = sum + number;
        
        if(count >= 10)
        {
            lessThanTen = false;
        }
        // lessThanTen = (count < 10);
        // cout << "This is count " << count << endl;
        // cout << "This is lessThanTen " << lessThanTen << endl;
    }
 }
 cout << "The sum of the first 10 numbers is " << sum << "." << endl;
 cout << " //////////// End of Chapter 6 //////////// \n\n";
}



#endif /* CH6_h */
