//
//  CH8.h
//  c++ Implementations
//
//  Created by Juan Davila on 5/17/17.
//  Copyright © 2017 Davila. All rights reserved.
//

#ifndef CH8_h
#define CH8_h

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;


void PrintLines(int numLines);
void Print2Lines();
void Print4Lines();
void PrintNumber(int& number);


// Function prototypes
void OpenFiles(ifstream& infile, ofstream& outFile);
void ProcessClients(ifstream& inFile, ofstream& outFile, float hourlyRate);
void ProcessAClient(ifstream& inFile, ofstream& outFile, int& totalTime, float hourlyRate);
void GetAndPrintAddress(ifstream& inFile, ofstream& outFile);
void PrintResults(int numberOfBills, int totalMinutes, float hourlyRate);


/////////////////////////////////////////////////////////////////////////////////
void runCh8()
{
 cout << " //////////// I am in CHAPTER 8 //////////// " << endl;
 // Ch 8.1 pg 350
 // **********************************************************************
 // Welcome program
 // This program prints a "Welcome Home" message
 // with a void function
 // **********************************************************************
 cout << "Welcome program" << endl;
 cout << "This program prints a \"Welcome Home\" message" << endl;
 cout << "with a void function" << endl;
 Print2Lines();
 cout << "Wellcome Home!" << endl;
 Print4Lines();
 cout << "\n\n";
    
    
    
    
 // Ch 8.2 pg 355
 // **********************************************************************
 // New Welcome Program
 // This program prints a "Welcome Home" message
 // **********************************************************************
 cout << "New Welcome Program" << endl;
 cout << "This program prints a \"Welcome Home\" message" << endl;
 PrintLines(2);
 cout << "Welcome Home" << endl;
 PrintLines(4);
 cout << "\n\n";
    
    
    
    
    
 // **********************************************************************
 // Change number by value
 // **********************************************************************
 cout << "Change number by value" << endl;
 int number;
 number = 10;
 cout << "The number before function is: " << number << endl;
 PrintNumber(number);
 cout << "The number after function is: " << number << endl;
 cout << "\n\n";
    
    
    
    
    
 // **********************************************************************
 // Ch. 8.4 pg 382
 // Program LawnCare calculates and writes the bills for a lawn care
 // service company. The names of the input and output files are
 // prompted for and read from the keyboard.
 // **********************************************************************
 cout << "Program LawnCare calculates and writes the bills for a lawn care" << endl;
 cout << "service company. The names of the input and output files are" << endl;
 cout << "prompted for and read from the keyboard. \n" << endl;
    
    
 float hourlyRate;
    
 ifstream inFile;
 ofstream outFile;
 OpenFiles(inFile, outFile);
 /* // The file is available but not being used for demo
  if(!inFile || !outFile)
    {
        cout << "Error opening files " << endl;
        return ;
    }*/
    
 // cout << "Enter hourly rate. " << endl;
 // cin >> hourlyRate;
 cout << "For demo purposes the hourly rate will be $35.25 \n" << endl;
 hourlyRate = 35.25;
    
 ProcessClients(inFile, outFile, hourlyRate);
    
 inFile.close();
 outFile.close();
 cout << " //////////// End of Chapter 8 //////////// \n\n";
}
/////////////////////////////////////////////////////////////////////////////////




 void Print2Lines()
 {
     cout << "*********************" << endl;
     cout << "*********************" << endl;
 }


 void Print4Lines()
 {
     cout << "*********************" << endl;
     cout << "*********************" << endl;
     cout << "*********************" << endl;
     cout << "*********************" << endl;
 }


 void PrintLines(int numLines)
 {
     for(int x = 1; x <= numLines; x++)
         cout << "*****************************" << endl;
 }


 void PrintNumber(int& number)
 {
     cout << "Function number in " << number << endl;
     number = number + 2;
     cout << "Function number after adding  " << number << endl;
 }






void OpenFiles(ifstream& inFile, ofstream& outFile)
{
    string inFileName;
    string outFileName;
    
    //cout << "Enter the name of the input file. " << endl;
    //cin >> inFileName;
    cout << "For demo purpose the file LawnCare.txt will be already in the inFileName " << endl;
    inFileName = "LawnCare.txt";
    inFile.open(inFileName.c_str());
    
    // cout << "enter the name of the output file. " << endl;
    // cin >> outFileName;
    cout << "For demo purposes the output file will be in LawnCareOut.txt" << endl;
    cout << "This will be in the output file LawnCareOut.txt \n" << endl;
    outFileName = "LawnCareOut.txt";
    
    outFile.open(outFileName.c_str());
    outFile << "Billing the client on file " << inFileName << endl;
    outFile << fixed;
    // putting the output file info to the outstream
    cout << "Billing the client on file " << inFileName << endl;
    cout << fixed;
}


void ProcessClients(ifstream& inFile, ofstream& outFile, float hourlyRate)
{
    int totalTime = 0;
    int numberOfBills = 0;
    string name;
    getline(inFile, name);
    while(inFile)
    {
        outFile << name << endl;
        ProcessAClient(inFile, outFile, totalTime, hourlyRate);
        numberOfBills++;
        getline(inFile, name);
        // putting the output file info to the outstream
        cout << name << endl;
        
    }
    PrintResults(numberOfBills, totalTime, hourlyRate);
}



void PrintResults(int numberOfBills, int totalMinutes, float hourlyRate )
{
    float minutes = static_cast<float>(totalMinutes);
    cout << "Total amount billed this month is "
    << minutes / 60.0 * hourlyRate << endl;
    cout << "Average time worked per job is "
    << minutes / float(numberOfBills) / 60.0 << endl;
    cout << "Average customer bill is "
    << minutes / 60.0 * hourlyRate / float(numberOfBills) << endl;
}


void GetAndPrintAddress(ifstream& inFile, ofstream& outFile)
{
    string line;
    getline(inFile, line);
    outFile << line << endl;
    // putting the output file info to the outstream
    cout << line << endl;
    getline(inFile, line);
    outFile << line << "\n\n";
    // putting the output file info to the outstream
    cout << line << "\n";
}



void ProcessAClient(ifstream& inFile, ofstream& outFile, int& totalTime, float hourlyRate)
{
    int time = 0;
    int hours;
    int minutes;
    float cost;
    int numberOfJobs;
    GetAndPrintAddress(inFile, outFile);
    inFile >> numberOfJobs;
    outFile << "Number of jobs: " << numberOfJobs << endl;
    // putting the output file info to the outstream
    cout << "Number of jobs: " << numberOfJobs << endl;
    
    for(int count = 1; count <= numberOfJobs; count++)
    {
        inFile >> hours >> minutes;
        time = hours * 60 + minutes + time;
        outFile << "Job " << count << ": " << hours << " hours and "
        << minutes << "minutes " << endl;
        // putting the output file info to the outstream
        cout << "Job " << count << ": " << hours << " hours and "
        << minutes << "minutes " << endl;
    }
    cost = static_cast<float>(time) / 60.0 * hourlyRate;
    totalTime = totalTime + time;
    outFile << "Amount of bill: $" << setprecision(2) << cost << "\n\n";
    // putting the output file info to the outstream
    cout << "Amount of bill: $" << setprecision(2) << cost << "\n\n";
    string skip;
    getline(inFile, skip);
}




/////////////////////////////////////////////////////////////////////////////////

/*
 // This is the input in the LawnCare.txt file
 
 Davis Allan James
 223 Red Wing Terrace
 Altamont WY 67606
 5
 1 45
 2 0
 0 30
 1 30
 2 50
 Soucy Steven Carl
 12 Wildblossom Court
 Englebrook WY 67628
 1
 8 45
 Castor Julia Maude
 18472 East Main Street
 Egremont WY 67624
 4
 1 30
 1 30
 1 30
 1 30
 Marengoni Christina Louise
 25 Pomegrate Loop
 Egremont WY 67624
 0
 */

/////////////////////////////////////////////////////////////////////////////////
/*
  // This is the output file LawnCareOut.txt file
 
 Billing the client on file LawnCare.txt
 Davis Allan James
 223 Red Wing Terrace
 Altamont WY 67606
 
 Number of jobs: 5
 Job 1: 1 hours and 45minutes
 Job 2: 2 hours and 0minutes
 Job 3: 0 hours and 30minutes
 Job 4: 1 hours and 30minutes
 Job 5: 2 hours and 50minutes
 Amount of bill: $302.56
 
 Soucy Steven Carl
 12 Wildblossom Court
 Englebrook WY 67628
 
 Number of jobs: 1
 Job 1: 8 hours and 45minutes
 Amount of bill: $308.44
 
 Castor Julia Maude
 18472 East Main Street
 Egremont WY 67624
 
 Number of jobs: 4
 Job 1: 1 hours and 30minutes
 Job 2: 1 hours and 30minutes
 Job 3: 1 hours and 30minutes
 Job 4: 1 hours and 30minutes
 Amount of bill: $211.50
 
 Marengoni Christina Louise
 25 Pomegrate Loop
 Egremont WY 67624
 
 Number of jobs: 0
 Amount of bill: $0.00

 */
/////////////////////////////////////////////////////////////////////////////////

#endif /* CH8_h */



















