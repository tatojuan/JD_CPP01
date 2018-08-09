//
//  Chapters.cpp
//  c++ Implementations
//
//  Created by Juan Davila on 5/17/17.
//  Copyright © 2017 Davila. All rights reserved.
//

#include "Chapters.hpp"
#include "CH1.h"
#include "CH2.h"
#include "CH3.h"
#include "CH4.h"
#include "CH5.h"
#include "CH6.h"
#include "CH7.h"
#include "CH8.h"
#include "CH9.h"
#include "CH10.h"


int printMenu(int menuchoice);

void runChapters()
{
    int menuchoice = 0;
   
    while(menuchoice >= 0 && menuchoice <= 10)
    {
        switch(menuchoice)
        {
            case 0:
                menuchoice = printMenu(menuchoice);
                break;
            case 1:
                // Hello World!
                hello();
                
                // This is chapter 1 example
                // Leap year program
                runCh1(2017);
                runCh1(2010);
                runCh1(2000);
                menuchoice = 0;
                break;
            case 2: runCh2();   // This is chapter 2 example
                menuchoice = 0;
                break;
            case 3: runCh3();   // This is chapter 3 example
                menuchoice = 0;
                break;
            case 4: runCh4();   // This is chapter 4 example
                menuchoice = 0;
                break;
            case 5: runCh5();   // This is chapter 5 example
                menuchoice = 0;
                break;
            case 6: runCh6();   // This is chapter 6 example
                menuchoice = 0;
                break;
            case 7: runCh7();   // This is chapter 7 example
                menuchoice = 0;
                break;
            case 8: runCh8();   // This is chapter 8 example
                menuchoice = 0;
                break;
            case 9: runCh9();   // This is chapter 9 example
                menuchoice = 0;
                break;
            case 10: runCh10(); // This is chapter 10 example
                menuchoice = 0;
                break;
            default:
                cin  >> menuchoice;     // This is the users choice
                break;
        }
        

    }
    

}

int printMenu(int choice)
{
    // Making a menue for the user
    cout << "***************************************************" << endl;
    cout << "******     Chapters menu                     ******" << endl;
    cout << "******     options:                          ******" << endl;
    cout << "******     1-10) For chapters examples       ******" << endl;
    cout << "******     0)    Menu                        ******" << endl;
    cout << "******     any other number to return        ******" << endl;
    cout << "******     to the previous menu              ******" << endl;
    cout << "******     Please enter a choice             ******" << endl;
    cout << "***************************************************" << endl;
    cin >> choice;     // This is the users choice
    return choice;
}




