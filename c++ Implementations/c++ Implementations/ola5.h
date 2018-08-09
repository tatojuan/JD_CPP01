//
//  ola5.h
//  c++ Implementations
//
//  Created by Juan Davila on 7/8/17.
//  Copyright © 2017 Davila. All rights reserved.
//

#ifndef ola5_h
#define ola5_h





// Juan Davila
// OLA5
// Professor: Dr. Zhijiang Dong
// Class: 3110
// ola.cpp file


#include <iostream>
#include <string>
#include "parameters.h"
#include <array>
using namespace std;



//function Prototypes
int longest(const int LongestVal[], int lower, int upper, int count, int& largest);
int fibonacci(int FibVal);
int sum(int SumVal);
//int shortest(string SentenceVal, int index, int count, int& shortWord);


void runOla5()
{
    // Varialbe declarations
    int upper = sizeof(LongestVal);	// finding the array upper bound
    int lower = 0;					// setting the array lower bound to zero
    int count = 0;					// starting to keep count to set the largest number
    int largest = 0;				// the largest consecutive numbers above zero from the array longest[]
    int index = 0;					// keeps track of position in the string
    //int shortWord = SentenceVal.size();
    
    // looking for the longest number that signifies consecutive positive numbers above zero
    longest(LongestVal, lower, upper, count, largest);
    // Printing the largest number
    cout << "The largest is: " << largest << endl;
    
    // printing + function call for the fibonacci secuence from
    cout << "the fibonacci number is: " << fibonacci(FibVal) << endl;
    
    // printing + function call for the sumation of values from 1 ... SumVal
    cout << "the sumation number is: " << sum(SumVal) << endl;
    
    count = 0;		// making sure count is set to zero
    // calling the shortest function
    
  //        cout << "Looking for the short word " << shortest(SentenceVal, index, count, shortWord) << endl;
    // printing the size of the shortest word
   //        cout << "The shortest word size is: " << shortWord << endl;
    
    return ;
}



// FIBONACCI function
int fibonacci(int FibVal)
{
    if (FibVal == 1)							// checking base cases
    {
        return 1;
    }
    else if (FibVal == 0)						// checking base cases
    {
        return 0;
    }
    else
        return (fibonacci(FibVal - 2) + fibonacci(FibVal - 1));
}



// SUMATION function
int sum(int SumVal)
{
    if (SumVal == 1)							// checking base cases
    {
        return 1;
    }
    else if (SumVal == 0)						// checking base cases
    {
        return 0;
    }
    else
        return (SumVal + sum(SumVal - 1));		// calling the function itself with one SumVal-1
}


// Finding the largest value that represents the consecutive numers in the array above zero
int longest(const int LongestVal[], int lower, int upper, int count, int& largest)
{
    // Checking the current tally count vs the largest number
    if(largest <= count)
    {
        largest = count;
    }
    // checking for the lower and upper bound not to be the same number and
    // Checking for the number in the array to be above zero
    if (lower != upper && LongestVal[lower] > 0)
    {
        count++;
        return (longest(LongestVal, lower + 1, upper, count, largest));
    }
    // checking for the lower and upper bound not to be the same number and
    // the nember in the array is also not a negative number
    if (lower != upper &&  LongestVal[lower] <= 0)
    {
        count = 0;
        return (longest(LongestVal, lower + 1, upper, count, largest));
    }
    // checking for the bound of lower
    if (lower > upper)
    {
        count = 0;
        return (longest(LongestVal, lower + 1, upper, count, largest));
    }
    return 0;
}


/*
// Finding the shortest word in the string
int shortest(string SentenceVal, int index, int count, int& shortWord)
{	// Cheching of an empty string
    if (SentenceVal.empty())
    {
        shortWord = 0;
        return 0;
    }
    cout << "Short word size " << shortWord << endl;
    // Testing for the next word with the empty character ' '
    // testing for end of line
    if (SentenceVal.at(index) == '\n')
    {
        if (count < shortWord)
        {
            shortWord = count;
        }
        return 0;
    }
    
    if (SentenceVal.at(index) == ' ')
    {
        if (count < shortWord)
        {
            shortWord = count;
        }
        count = 0;		// resetting the count for the word;
        return shortest(SentenceVal, index + 1, count, shortWord);
    }
    // Testing while not the end of line
    count++;
    return shortest(SentenceVal, index + 1, count, shortWord);
    
    
}

*/




#endif /* ola5_h */
