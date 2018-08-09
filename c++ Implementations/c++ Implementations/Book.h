
#pragma once
/*
* Author: Zhijiang Dong
* Date: Jan 15, 2007
* File: Book.h
* As a part of the 3110 assignment, this file
* defines a class Movie, which will be sold in
* a store
*/

#include <string>

/*
* No methods are provided to modify movie information.
* Movie information should be stable, whch means whenever
* you get a movie object, you are not supposed to
* change movie information such as title, and director.
*/

#include "StoreItem.h"

class Book : public StoreItem
{
public:
	//default constructor setting every thing to empty or 0
	Book(std::string title = "", std::string author = "", std::string date = "",
		std::string barcode = "", double price = 0, int copy = 0, int demand = 0);

	std::string getTitle() const;

	std::string getAuthor() const;

	std::string getDate() const;

	//This function returns a dynamically created StoreItem object
	//which is created from a string.
	//The string info must be of the line format specificed in
	//inventory.txt
	Book* createFromString(const std::string info) override;

	//Print current item to the screen
	void printItem() override;

private:
	std::string m_title;        // movie title
	std::string m_author;     // movie directors
	std::string m_date;
};
