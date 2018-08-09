// Movie.cpp file


#include "Book.h"
#include <iostream>
#include <string>
#include "StoreItem.h"
#include <sstream>
using namespace std;


// This is the constructor for the movie 
Book::Book(string title, string author, string date, string barcode,
	double price, int copy, int demand)
	: m_title(title), m_author(author), m_date(date), StoreItem(barcode, price, copy, demand) {}


// returning the movie title
string Book::getTitle() const {
	return m_title;
}

// returning the director
string Book::getAuthor() const {
	return m_author;
}

// returning the date
string Book::getDate() const {
	return m_date;
}



//This function returns a dynamically created StoreItem object
//which is created from a string.
//The string info must be of the line format specificed in
//inventory.txt
Book* Book::createFromString(const std::string info) 
{
	// Declaring the variables to catch the incoming string 
	char trash; // <---------------- Getting a trash variable
	string a_book, a_title, s_date, a_author, a_barcode, s_price, s_copy, s_demand;
	float a_price;
	int a_copy, a_demand;

	stringstream ss(info); // <----- Ussing the string stream function
						   // <----- string::size_type stringSize;

	ss >> trash; // <--------------- Getting the first '|' as trash out of the string 
				 // separating the info string into the corresponding variables
	getline(ss, a_book,		DELIMITER);
	getline(ss, a_barcode,	DELIMITER);
	getline(ss, a_title,	DELIMITER);
	getline(ss, a_author,	DELIMITER);
	getline(ss, s_date,		DELIMITER);
	getline(ss, s_price,	DELIMITER);
	getline(ss, s_copy,		DELIMITER);
	getline(ss, s_demand,	DELIMITER);
	// converting the strings into the float and ints variables 
	a_price =				stof(s_price.c_str());
	a_copy =				stoi(s_copy.c_str());
	a_demand =				stoi(s_demand.c_str());
	

	// generating a new movie object pointer type to be returned 
	Book* aBook = new Book(a_title, a_author, s_date, a_barcode, a_price, a_copy, a_demand);
	return aBook;

}






//Print current item to the screen
void Book::printItem() 
{
	string stars = " *************** ";
	cout << stars << "Book with the barcode "	<< getBarcode() << stars << endl;
	cout << "title \t\t"						<< getTitle() << endl;
	cout << "Author \t\t"						<< getAuthor() << endl;
	cout << "Publish date: \t"					<< getDate() << endl;
	cout << "Price \t\t"						<< getPrice() << endl;
	cout << "# of copy: \t"						<< getCopy() << endl;
	cout << "# of demand: \t"					<< getDemand() << endl;

	return;
}









