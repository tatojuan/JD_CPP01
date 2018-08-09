//
//  ola4.h
//  c++ Implementations
//
//  Created by Juan Davila on 7/8/17.
//  Copyright © 2017 Davila. All rights reserved.
//

#ifndef ola4_h
#define ola4_h


// Ola4
// Juan Davila
// Professor: Dr. Zhijiang Dong
// Class: CSCI3110

#include <ctype.h>
#include <sstream>
#include <iostream>
#include <typeinfo>
#include <fstream>
#include <string>
#include <list>
#include "StoreItem.h"
#include "Movie.h"
#include "Book.h"
#include <algorithm>
#include <iterator>
#include <functional>
using namespace std;


char printMenu(char choice);							// <---- Print menu function
void print(StoreItem *item);				// <---- Printing an item from the list



void runOla4()
{
    char		choice = 'Z';				// <---- Priming the choice to go print the menu from the switch default
    string		temp;						// <---- Temp variable
    string		movieOrBook;				// <---- Temp for movie or book
    Movie		movieTemp;					// <---- Temp for a Movie
    Book		bookTemp;					// <---- Temp for a Book
    string		fileName = "inventory.txt";	// <---- File name to Open
    list		<int> x;
    ifstream	fileIn;						// <---- Variable to catch the incoming data from file
    fileIn.open(fileName.c_str());			// <---- Opening the file of this file name
    
    // Declaring the List w/ StoreItem pointers
    list<StoreItem *> storeInventory;
    
    // Declaring an iterator for the list
    list<StoreItem *>::const_iterator it;
    
    if (!fileIn)							// Thowing a cerr and exiting the program if file not open
    {
        cerr << "The file " << fileName << " could not be open \nGood bye! \n ";
        return ;
    }
    
    
    // Prime read
    getline(fileIn, temp);					// need to catch the line to see if item is (Movie / Book)
    
    movieOrBook = temp.substr(1, 5);		// Getting the title from the string to determine if is (Movie / Book)
    
    
    // Storing items into the list
    while (fileIn)
    {
        //cout << "is this a Movie or book? " << movieOrBook << endl;
        if (movieOrBook == "Movie")			// if this is a Movie add to the list as a Movie
        {
            storeInventory.push_back(movieTemp.createFromString(temp));
        }
        if (movieOrBook == "Book|")			// if this is a Book add to the list as a Book
        {
            storeInventory.push_back(bookTemp.createFromString(temp));
        }
        
        if(getline(fileIn, temp))				// need to catch the line to see if item is (Movie / Book)
            movieOrBook = temp.substr(1, 5);	// Getting the title from the string to determine if is (Movie / Book)
    }
    //  End of while loop
    
    
    // storeInventory.sort();					// Storing the list Inventory
    
    
    for (auto x : storeInventory)
    {
        for (auto i : storeInventory)
        {
            if (x < i)
            {
                swap(x, i);
            }
        }
    }
    
    
    
    /*
     for (auto it1 = storeInventory.begin(), end = storeInventory.end(); it1 != end; ++it1)
     {
     for (auto it2 = std::next(it1); it2 != end; ++it2)
     {
     if (&it1 < &it2)
     {
     
     }
     }
     }
     */
    
    
    /*
     std::list<int*>::iterator *it2 = (storeInventory)->begin();
     for (std::list<int>::iterator it1 = storeInventory.begin(); it1 != storeInventory.end(); it1++) {
     printf("\ns1: %d  s2: %d", *it1, *it2);
     it2++;
     }*/
    
    
    
    
    
    
    
    
    
    
    
    
    
    choice = 'Z';
    
    
    
    
    // Entering into the program menu until Q is picked
    while (choice == 'M' || choice == 'B' || choice == 'L' || choice == 'R' || choice == 'C' || choice == 'Q' || choice == 'Z')
    {
        
        switch (choice)
        {
            case 'M':							// Inquire a Movie by title
            {
                /*
                 // prompting the user for a movie title to be found
                 string movieToFind;
                 bool found = false;
                 cout << "Please enter the movie title you would like to find: ";
                 cin >> movieToFind;
                 
                 for (auto i : storeInventory)
                 {
                 if (i->getTitle() == movieToFind)	// comparing movie titles with user entry
                 {
                 print(i);				// Printing this movie information
                 found = true;			// Setting the flag if the movie was found
                 }
                 }
                 if (found == false)				// If the movie is not found
                 {
                 cout << "The movie " << movieToFind << " was not found" << endl;
                 }
                 choice = 'Z';
                 */
            }
                break;
                
            case 'B':							// Inquire a Book by author
            {}
                break;
                
            case 'L':							// List the inventory
            {
                for(auto x:storeInventory )		// Cycling through the store Inventory list
                {
                    print(x);					// function call to print either the (Book / Movie) object being pointed
                }
                choice = 'Z';					// Resetting the choice to print the menue again
            }
                break;
                
            case 'R':							// Return one Movie
            {}
                break;
                
            case 'C':							// Check out
            {}
                break;
                
            case 'Q':							// Quit the main menu
            {
                cout << "You have EXIT this program. \nThank you! \n";
                return ;
            }
                break;
                
            default:							// Printing the store menu and returning a Choice
            {
                choice = printMenu(choice);			// printing the menu
            }
                break;
        }
    }
    
    
    cout << "Stoping the program here" << endl;
    cin >> choice;
    return ;
}


char printMenu(char choice)
{
    bool pickRightCommand = false;
    if (choice == 'Z')
    {
        cout << " \t\t\t MiniMovie Store " << endl;
        cout << "***************************************************************************" << endl;
        cout << "**\t Command  \t  Description				      **" << endl;
        cout << "**\t M        \t  Inquire a movie tittle	\t  	 **" << endl;
        cout << "**\t B        \t  Inquire a book tittle\t\t	 **" << endl;
        cout << "**\t L        \t  List inventory				 **" << endl;
        cout << "**\t R        \t  Return one Movie		\t	 **" << endl;
        cout << "**\t C        \t  Check out				  	 **" << endl;
        cout << "**\t Q        \t  Quit the main menu    \t   \t\t **" << endl;
        cout << "***************************************************************************" << endl;
        cout << "Please enter your command (M, B, L, R, C, Q): ";
    }
    
    cin >> choice;
    choice = toupper(choice);
    while (!pickRightCommand)
    {
        switch (choice)
        {
            case 'M': case 'B': case 'L': case 'R': case 'C': case 'Q':
            {
                pickRightCommand = true;
                return choice;
            }
            default:
                cout << "Please the choice needs to be: (M, B, L, R, C, Q): ";
                cin >> choice;
                choice = toupper(choice);
        }
    }
    return choice;
}


void print(StoreItem *item)
{
    Movie ifMovie;							// A Movie object
    Book  ifBook;							// A Book object
    if ((typeid(*item)) == typeid(ifMovie))
    {
        ((Movie *)item)->printItem();
        cout << endl;
    }
    else if ((typeid(*item)) == typeid(ifBook))
    {
        ((Book *)item)->printItem();
        cout << endl;
    }
    
}





#endif /* ola4_h */
