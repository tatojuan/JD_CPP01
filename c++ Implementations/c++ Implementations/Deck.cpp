//
//  Deck.cpp
//  OLA3
//
//  Created by Juan Davila on 2/16/17.
//  Copyright © 2017 Davila. All rights reserved.
//

#include "Deck.h"
#include "Card.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


// default constructor
Deck::Deck()
{
	topCard = 51;
	int cardCount = 0;
	for (int w = 1; w <= 13; ++w)
	{
		theDeck[cardCount++] = Card(w, suite::clubs);
	}
	for (int x = 1; x <= 13; ++x)
	{
		theDeck[cardCount++] = Card(x, suite::hearts);
	}
	for (int y = 1; y <= 13; ++y)
	{
		theDeck[cardCount++] = Card(y, suite::spades);
	}
	for (int z = 1; z <= 13; ++z)
	{
		theDeck[cardCount++] = Card(z, suite::diamonds);
	}
}


// Remove the top card from the deck
// and return it.
Card Deck::dealCard()
{
	/*
	Card cardOut = theDeck[topCard];
	topCard--;
	return cardOut;*/
	return theDeck[topCard--];
}


// Making the deck of cards into random order 
// Shuffle the cards on the deck
void Deck::Shuffle()
{
	for (int x = 0; x<(52 - 0); x++)
	{
		int r = x + (rand() % (52 - x));
		Card temp = theDeck[x];
		theDeck[x] = theDeck[r];
		theDeck[r] = temp;
	}
}


// return true is no more cards on the deck,
// otherwise return false
bool Deck::isEmpty()
{
	if (topCard <= 0)
	{
		return true;
	}
	return false;
}

//overload << operator to display the deck
ostream& operator << (ostream& os, const Deck& dk)
{
	// cout << "I am in the deck overloaded operator " << endl;
	for (int i = 0; i < dk.Card_Num; ++i) // goes to <52
	{
		os << dk.theDeck[i];
		if (i == 12 || i == 25 || i == 38 || i == 51)
			cout << endl;
	}
	return os;
}


