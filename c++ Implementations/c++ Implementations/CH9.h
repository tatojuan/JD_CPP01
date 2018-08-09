//
//  CH9.h
//  c++ Implementations
//
//  Created by Juan Davila on 5/17/17.
//  Copyright © 2017 Davila. All rights reserved.
//

#ifndef CH9_h
#define CH9_h

#include <iostream>
using namespace std;


void SomeFunc(float);
const int A = 17;
int b;
int c;

void Counting();





void runCh9()
{
 cout << " //////////// I am in CHAPTER 9 //////////// " << endl;
 // Ch 9.1 pg 404
 // **************************************************************************
 // This program demostrates global and local variables
 // **************************************************************************
 cout << "This program demostrates global and local variables" << endl;
 b = 4;
 c = 6;
 SomeFunc(42.8);



    
    
 // Ch 9.2 pg 411
 // **************************************************************************
 // This program demostrates the use of a static variable
 // **************************************************************************
 cout << "This program demostrates the use of a static variable" << endl;
 for(int count = 0; count <= 10; count++)
     Counting();
    
    
  cout <<  " //////////// End of Chapter 9 //////////// \n\n";
 }





 void SomeFunc(float c)
 {
 float b;
 b = 2.3;
 cout << "A = " << A << endl;
 cout << "b = " << b << endl;
 cout << "c = " << c << endl;
 }



void Counting()
{
    static int counter = 0;
    counter++;
    cout << "count: " << counter << endl;
    
}




#endif /* CH9_h */
