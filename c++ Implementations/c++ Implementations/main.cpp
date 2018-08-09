//
//  main.cpp
//  c++ Implementations
//
//  Created by Juan Davila on 5/16/17.
//  Copyright © 2017 Davila. All rights reserved.
//
// command - / command =          make letters smaller or bigger 
#include <iostream>
#include "Chapters.hpp"
#include "Inherit.hpp"
#include "linkedList.h"
#include "olasMenue.hpp"
using namespace std;



int main(int argc, const char * argv[])
{
    
    int m_choice = 0;
    while(m_choice >= 0 && m_choice <= 10)
    {
        switch(m_choice)
        {
            case 0:
                // Making a menue for the user
                cout << "***************************************************" << endl;
                cout << "******     Main Menu                         ******" << endl;
                cout << "******     options:                          ******" << endl;
                cout << "******     0) Main menu                      ******" << endl;
                cout << "******     1) Chapters 1-10 menu             ******" << endl;
                cout << "******     2) Inheritance Example            ******" << endl;
                cout << "******     3) Linked List Example            ******" << endl;
                cout << "******     4) ADS OLAs menu                  ******" << endl;
                cout << "******     Please enter a choice             ******" << endl;
                cout << "***************************************************" << endl;
                cin  >> m_choice;     // This is the users choice
                break;
            case 1:
                // This option will call the Chapters menue
                runChapters();
                m_choice = 0;
                break;
            case 2:
                // This option will call the inheritance example
                runInherit();
                m_choice = 0;
                break;
            case 3:
                // This option will call the inheritance example
                runLinkedList();
                m_choice = 0;
                break;
            case 4:
                // This option will call ADS olas menue
                runOlasMenue();
                m_choice = 0;
                break;
            default:
                if(m_choice < 0 || m_choice > 10)
                {
                    cout << "Good Bye!" << endl;
                    return 0;
                }
                break;
        }
        
        
    }

    

    
    
    
    
    
    return 0;
}




