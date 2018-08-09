//
//  CH5.h
//  c++ Implementations
//
//  Created by Juan Davila on 5/16/17.
//  Copyright © 2017 Davila. All rights reserved.
//
//
// Ch5
// Ch 5 Conditions, Logical Espressions, and Selection Control Structure
//

#ifndef CH5_h
#define CH5_h

#include <iostream>
#include <string>


using namespace std;


void runCh5()
{
 cout << " //////////// I am in CHAPTER 5 //////////// " << endl;
 // Ch 5 pg 190
 // **********************************************************************
 // This program compares integer values
 // **********************************************************************
 // true = 1
 // false = 0
 cout << "This program compares integer values " << endl;
 cout << (2 == 2) << endl;
 cout << (3 == 2) << endl;
 cout << (-3 == 2) << endl;
 cout << (-3 == -3) << endl;
 cout << (-3 == -2) << endl;



 // Ch 5.3 pg 194
 // **********************************************************************
 string myString = "CAT";
 unsigned long pos;
 pos = myString.find('A');
 if( pos == string::npos)
 cout << "No 'A' was found" << endl;
 else
 cout << "An 'A' was found in position " << pos << endl;
 pos = myString.find('B');
 if( pos == string::npos)
 cout << "No 'B' was found" << endl;
 else
 cout << "A 'B' was found in position " << pos << endl;
    
 cout << " //////////// End of Chapter 5 //////////// \n\n";
 // output
 // An 'A' was found in position 1
 // No 'B' was found
}

/*
 // Ch 5.6 pg 216
 // **********************************************************************
 // StreamState program
 // This program demostrates testing the state of a stream
 // **********************************************************************
 #include <iostream>
 #include <fstream>
 using namespace std;
 int main()
 {
 int height;
 int width;
 ifstream inFile;
 inFile.open("measures.txt");
 if(!inFile)
 {
 cout << "Can't open the input file. ";
 return 1;    // <-- It is by convention return 1 when errors.
 }
 inFile >> height >> width;
 cout << "For a height of " << height << endl
 << "and a width of " << width << endl
 << "The area is " << height * width << endl;
 return 0;
 }
 // output
 // For a height of 50
 // and a width of 100000
 // The area is 5000000
 */



#endif /* CH5_h */
