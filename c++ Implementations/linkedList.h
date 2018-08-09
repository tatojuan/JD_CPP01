//
//  linkedList.h
//  c++ Implementations
//
//  Created by Juan Davila on 5/18/17.
//  Copyright © 2017 Davila. All rights reserved.
//

#ifndef linkedList_h
#define linkedList_h

#include <iostream>
using namespace std;



//*************************************************************
// The struct must me declared before the function prototypes 
struct node
{
    int number;
    node *next;
};



// Function Prototypes
bool isEmpty(node *head);
char menu();
void insetAsFirstElement(node *&head, node*&last, int number);
void insert(node *&head, node*&last, int number);
void remove(node *&head, node*&last);
void showList(node * current);


void runLinkedList()
{




    //
    //  main.cpp
    //  Linked List
    //
    //  Created by Juan Davila on 10/1/16.
    //  Copyright © 2016 Davila. All rights reserved.
    //
    // I am practicing linked list from youtube video
    

        node *head = NULL;
        node *last = NULL;
        char choice;
        int number;
        do
        {
            choice = menu();
            switch (choice)
            {
                case '1':
                    cout << "Please enter a number: " ;
                    cin >> number;
                    insert(head, last, number);
                    break;
                case '2':
                    remove(head, last);
                    break;
                case '3':
                    showList(head);
                    break;
                    
                default:
                    cout << "system Exit \n";
                    break;
            }
        }while(choice != '4' );

}




//*************************************************************
bool isEmpty(node *head)
{
    if(head == NULL)
        return true;
    else
        return false;
}
//*************************************************************
char menu()
{
    char choice;
    cout << "menu \n1" ;
    cout << "1. add and item . \n";
    cout << "2. remove an item . \n";
    cout << "3. show the list . \n";
    cout << "4. Exit \n";
    cin >> choice;
    return choice;
}
//*************************************************************
void insetAsFirstElement(node *&head, node*&last, int number)
{
    node *temp = new node;
    temp->number = number;
    temp->next = NULL;
    head = temp;
    last = temp;
}
//*************************************************************
void insert(node *&head, node*&last, int number)
{
    if(isEmpty(head))
        insetAsFirstElement(head, last, number);
    else
    {
        node *temp = new node;
        temp->number = number;
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
//*************************************************************
void remove(node *&head, node*&last)
{
    if(isEmpty(head))
        cout << "This is already empty" << endl;
    else if(head == last)
    {
        delete head;
        head = NULL;
        last = NULL;
    }
    else
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }
}
//*************************************************************
void showList(node * current)
{
    if(isEmpty(current))
        cout << "the list is empty " << endl;
    else
    {
        cout << "The list contains: " << endl;
        while(current != NULL)
        {
            cout << current->number << endl;
            current = current->next;
        }
    }
}
//*************************************************************



#endif /* linkedList_h */
