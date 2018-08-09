//
//  Card.cpp
//  OLA3
//
//
#include <iostream>
#include "Card.h"
#include <string>
using namespace std;


//default constructor. It is required since another class
//may declare an array of Card objects.
Card::Card()
{

	cfaceValue = 0;
	cpointValue = 0;
}

//another constructor
Card::Card(int faceValue, suite type)
{
	// assigning the face and point values of the cards
	if (faceValue == 1)
	{
		cfaceValue = faceValue;
		cpointValue = 15;
	}
	else if (faceValue >= 2 && faceValue <= 13)
	{
		cfaceValue = faceValue;
		cpointValue = faceValue;
		if (faceValue >= 10 && faceValue <= 13)
		{
			cpointValue = 10;
		}
	}

	// Checking to see what type of card needs to be assigned
	switch (type)
	{
	case clubs:
		ctype = clubs;
		break;
	case hearts:
		ctype = hearts;
		break;
	case spades:
		ctype = spades;
		break;
	case diamonds:
		ctype = diamonds;
		break;
	}
}


// overload the << operator
ostream& operator << (ostream& os, const Card& cd)
{
	switch (cd.ctype)
	{
	case clubs:
		cout << ((char)0x05);
		break;
	case hearts:
		os << ((char)0x03);
		break;
	case spades:
		os << ((char)0x06);
		break;
	case diamonds:
		os << ((char)0x04);
		break;
	default:
		break;
	}
	switch (cd.cfaceValue)
	{
	case 1:  os << "A"; break;
	case 11: os << "J"; break;
	case 12: os << "Q"; break;
	case 13: os << "K"; break;
	default:
		os << cd.cfaceValue;
		break;
	}
	os << "[" << cd.cpointValue << "]  ";
	return os;
}


// compare the point value of cards *this and cd.
// return true if *this has a smaller pointer value than cd.
// otherwise, return false.
bool Card::operator < (const Card& cd) const
{
	if (cpointValue < cd.cpointValue)
	{
		return true;
	}
	return false;
}


// compare the point value of cards *this and cd.
// return true if *this has a larger point value than cd.
// otherwise, return false.
bool Card::operator > (const Card& cd) const
{
	if (cpointValue > cd.cpointValue)
	{
		return true;
	}
	return false;
}

// compare the point value of cards *this and cd
// return true if they have the same point value,
// otherwise return false.
bool Card::operator == (const Card& cd) const
{
	if (cpointValue == cd.cpointValue)
	{
		return true;
	}
	return false;
}

// return the point value
int Card::getPointValue() const
{
	return cpointValue;
}

