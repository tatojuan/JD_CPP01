//
//  CH4.h
//  c++ Implementations
//
//  Created by Juan Davila on 5/17/17.
//  Copyright © 2017 Davila. All rights reserved.
//

#ifndef CH4_h
#define CH4_h


#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;


//



void runCh4()
{
    cout << " //////////// I am in CHAPTER 4 //////////// " << endl;
    
    // Ch 4.1 pg 140
    // *********************************************************
    // This program demostrates cin and cout
    // *********************************************************
    cout << "This program demostrates cin and cout." << endl;
    int year = 1775;
    int month = 11 ;
    int day = 10;
    cout << "Enter the month, day and year in integer form. "
    << endl;
    // cin >> month >> day >> year;                  // This needs no comment to run fluently
    cout << month << "/" << day << "/" << year << endl;
    cout << "\n\n";
    // output
    // Enter the month, day and year in integer form.
    // 07
    // 13
    // 1976
    // 7/13/1976
    
    
    
    
    
    
    // Ch 4.1 pg 144
    // *********************************************************
    // This program demostrates the use of the get function.
    // *********************************************************
    cout << "This program demostrates the use of the get function." << endl;
    char ch1 = 'A', ch2 = 'B', ch3 = 'C';
    cout << "Enter three characters including a space." << endl;
    //cin.get(ch1);                  // This needs no comment to run fluently
    //cin.get(ch2);                  // This needs no comment to run fluently
    //cin.get(ch3);                  // This needs no comment to run fluently
    cout << "You entered: " << ch1 << ", " << ch2 << ", " << ch3 << ", " << endl;
    cout << "\n\n";
    // output
    // Enter three characters including a space.
    // get
    // You entered: g, e, t,
    
    
    
    
    
    // Ch 4.4 pg 158
    // *********************************************************
    // Program payment calculator program
    // This program determines the monthly payments on a mortgage
    // given the loan amount, the yearly interest rate, and the number of years
    // *********************************************************
    cout << "Program payment calculator program" << endl;
    cout << "This program determines the monthly payments on a mortgage" << endl;
    cout << "given the loan amount, the yearly interest rate, and the number of years." << endl;
    
    // Input variable
    float loanAmount = 221000.00;
    float yearlyInterest = 0.03625;
    int numberOfYears = 30;
    
    // ofstream outData;
    // ifstream inData;
    
    // Local variables
    float monthlyInterest = 0;
    int numberOfPayments = 0;
    float payment = 0;
    
    /*
     // Open files
     inData.open("loanIn.txt");
     outData.open("loanOut.txt");
     // read values
     inData >> loanAmount >> yearlyInterest >> numberOfYears;
     */
    
    // Calculate values
    monthlyInterest = (yearlyInterest / 12);
    numberOfPayments = (numberOfYears * 12);
    payment = (loanAmount * pow(1 + monthlyInterest, numberOfPayments)
               * monthlyInterest) /
    (pow(1 + monthlyInterest, numberOfPayments) - 1);
    
    // Output results
    /*
     outData << fixed << "Loan amount:   " << setprecision(2)
     << loanAmount << endl << "Interest rate:    "
     << setprecision(4) << yearlyInterest << endl
     << "Number of years: " << numberOfYears << endl;
     outData << fixed << "Monthly payment: " << setprecision(2)
     << payment << endl;
     */
    // Close files
    // inData.close();
    // outData.close();
    cout << "rerouting output to command line " << endl;
    cout << fixed << "Loan amount:   " << setprecision(2)
    << loanAmount << endl << "Interest rate:    "
    << setprecision(4) << yearlyInterest << endl
    << "Number of years: " << numberOfYears << endl;
    cout << fixed << "Monthly payment: " << setprecision(2)
    << payment << endl;
    cout << "\n\n";
    
    
    
    // Ch 4.4 pg 160
    // *********************************************************
    // This program demostrates inputting file names
    // *********************************************************
    
    cout << "This program demostrates inputting file names" << endl;
    cout << "This program is commented out " << endl;
    /*
     ifstream inFile;
     string fileName;
     string inputString;
     cout << "Enter the input file name: ";
     cin >> fileName;
     inFile.open(fileName.c_str());
     getline(inFile, inputString);
     cout << "First line of file: " << inputString << endl;
     */
    cout << " //////////// End of Chapter 4 //////////// \n\n";
    // output
    // Enter the input file name: testData.txt
    // First line of file: Oh what a beautiful day!
}



#endif /* CH4_h */
