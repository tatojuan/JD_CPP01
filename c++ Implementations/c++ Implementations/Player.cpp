//
//  Player.cpp
//  OLA3
//
#include "Player.h"
#include "Card.h"
#include "Deck.h"
#include <iostream>
#include <string>
using namespace std;


// constructor for the player
Player::Player(string name) 
{
	pname = name;
	pscore = 0;
	for (int i = 0; i < 3; ++i)
	{
		played[i] = true;
	}
}


// This function returns a randomly picked card 
Card Player::playCard()
{
    
      Card temp;  // only needed to return something 
	if (!emptyHand())
	{
      
		int pickThisCard = rand() % (3 - 0);  // Picking a card randomly betweeen 0 - 3
		while (!emptyHand())
		{
			if (played[pickThisCard] == false)
			{
				played[pickThisCard] = true;
				return hand[pickThisCard];			// returning this card 
			}
		 pickThisCard = rand() % (3 - 0);
		}
        
	}
    return temp;
}


// The player gets one card from the deck / the deck stack
void Player::drawCard(Deck& dk)
{
	if (dk.isEmpty() != true)
	{
		for (int x = 0; x < Max_Cards; ++x) // goes up to 3 cards
		{
			if (played[x] == true)
			{
				hand[x] = dk.dealCard();
				played[x] = false;
			}
		}
	}
	return;
}


// Add the point value of the card
// to the score of the player
void Player::addScore(Card acard) {
	pscore = pscore + acard.getPointValue();
}


// Return the score the player has earned so far
int Player::total() const {
	return pscore;
}



// return the name of the player
string Player::getName() const {
	return pname;
}



// Return true if no more cards in the player's hands,
// otherwise false
bool Player::emptyHand() const
{	
	if (played[0] == true && played[1] == true && played[2] == true)
	{
		return true;
	}
	return false;
}



// overload the << operator to display all cards in player's hand
ostream& operator << (std::ostream& os, const Player& dk)
{
	for (int x = 0; x < 3; ++x)
	{
		if (dk.played[x] == false)
		{
			os << dk.hand[x] << " ";
		}
		if (dk.played[x] == true)
			cout << " ----- ";
	}
	return os;
}


