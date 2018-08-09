//
//  olasMenue.cpp
//  c++ Implementations
//
//  Created by Juan Davila on 5/18/17.
//  Copyright © 2017 Davila. All rights reserved.
//

#include "olasMenue.hpp"
#include "ola1.h"
#include "ola2.h"
#include "ola3.h"
#include "ola4.h"
#include "ola5.h"



void runOlasMenue()
{
    int choice = 0;
    
    while(choice >= 0 && choice <= 10)
    {
        switch(choice)
        {
            case 1:
                // This is Ola1
                runOla1();
                choice = 0;
                break;
            case 2:
                // This is Ola2
                runOla2();
                choice = 0;
                break;
            case 3:
                // This is Ola3
                runOla3();
                choice = 0;
                break;
            case 4:
                // This is Ola3
                runOla4();
                choice = 0;
                break;
            case 5:
                // This is Ola3
                runOla5();
                choice = 0;
                break;
                
                
                
                
            default:
                // Making a menue for the user
                cout << "***************************************************" << endl;
                cout << "******     ADS menu                          ******" << endl;
                cout << "******     OLAs 1-7                          ******" << endl;
                cout << "******     options:                          ******" << endl;
                cout << "******     1) run Ola1                       ******" << endl;
                cout << "******     2) run Ola2                       ******" << endl;
                cout << "******     3) run Ola3                       ******" << endl;
                cout << "******     4) run Ola4                       ******" << endl;
                cout << "******     5) run Ola5                       ******" << endl;
                cout << "******     0) menu                           ******" << endl;
                cout << "******     any other number to return        ******" << endl;
                cout << "******     to the previous menu              ******" << endl;
                cout << "******     Please enter a choice             ******" << endl;
                cout << "***************************************************" << endl;
                cin  >> choice;     // This is the users choice
                if(choice < 0 || choice > 10)
                {
                    cout << "Returning to Main menue" << endl;
                    return;
                }
                break;
        }
        
        
    }
    
    
}
