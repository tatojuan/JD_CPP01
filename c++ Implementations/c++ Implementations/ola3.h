//	Juan Davila
//
//  OLA: OLA3
//	Professor: Dr. Dong
//
//
//	file: ola3.cpp


#ifndef ola3_h
#define ola3_h


#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

void runOla3()
{
    // variables declaration
    int		turnsPlayed = 1;			// keeping track of how many hands are played
    bool	keepPlaying = true;
    string	stars = "********************";
    Card	playerOnesCard;				// temp card for the player
    Card	playerTwosCard;				// temp card for the player
    Deck	myDeck;						// creating object of Deck of card
    Player	firstPlayer("John");		// First player with name
    Player	secondPlayer("Jane");		// Second player with name
    
    cout << "This is the sorted Deck of cards" << endl;
    cout << myDeck << "\n\n";			// printing the sorted deck of cards
    myDeck.Shuffle();					// shuffling the deck of cards
    cout << "this is the shuffled deck \n" << myDeck << "\n\n";
    
    firstPlayer.drawCard(myDeck);		// initializing the first player's hand
    secondPlayer.drawCard(myDeck);		// initializing the second player's hand
    
    while (keepPlaying)
    {
        // output for # of hands played
        cout << stars << "This is the ( " << turnsPlayed << " )hand played " << stars << endl;
        
        cout << firstPlayer.getName() << "'s hand is: " << firstPlayer;
        cout << "with score of: " << firstPlayer.total() << endl;
        cout << secondPlayer.getName() << "'s hand is: " << secondPlayer;
        cout << "with score of: " << secondPlayer.total() << "\n\n";
        
        
        playerOnesCard = firstPlayer.playCard();	// assigning the card to be played into the card temp
        playerTwosCard = secondPlayer.playCard();	// assigning the card to be played into the card temp
        
        if (playerOnesCard == playerTwosCard)
        {
            cout << "Both players have the same hand " << endl;
            firstPlayer.addScore(playerOnesCard);
            secondPlayer.addScore(playerTwosCard);
            cout << firstPlayer.getName() << "'s card is: " << playerOnesCard;
            cout << "with score of: " << firstPlayer.total() << endl;
            cout << secondPlayer.getName() << "'s card is: " << playerTwosCard;
            cout << "with score of: " << secondPlayer.total() << endl;
        }
        if (playerOnesCard > playerTwosCard)
        {
            cout << "Player one takes the hand" << endl;
            firstPlayer.addScore(playerOnesCard);
            firstPlayer.addScore(playerTwosCard);
            cout << firstPlayer.getName() << "'s card is: " << playerOnesCard;
            cout << "with score of: " << firstPlayer.total() << endl;
            cout << secondPlayer.getName() << "'s card is: " << playerTwosCard;
            cout << "with score of: " << secondPlayer.total() << endl;
        }
        if (playerOnesCard < playerTwosCard)
        {
            cout << "Player two takes the hand" << endl;
            secondPlayer.addScore(playerTwosCard);
            secondPlayer.addScore(playerOnesCard);
            cout << firstPlayer.getName() << "'s card is: " << playerOnesCard;
            cout << "with score of: " << firstPlayer.total() << endl;
            cout << secondPlayer.getName() << "'s card is: " << playerTwosCard;
            cout << "with score of: " << secondPlayer.total() << endl;
        }
        
        cout << firstPlayer.getName() << " played card: " << playerOnesCard << endl;
        cout << secondPlayer.getName() << " played card: " << playerTwosCard << endl;
        
        turnsPlayed++;
        firstPlayer.drawCard(myDeck);
        secondPlayer.drawCard(myDeck);
        
        
        if ((secondPlayer.emptyHand() == true) || (firstPlayer.emptyHand() == true))
        {
            keepPlaying = false;
        }
        
        cout << "\n\n";
    }
    
    
   
}


#endif /* ola3_h */





