// Movie.cpp file


#include "Movie.h"
#include "StoreItem.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


// This is the constructor for the movie 
Movie::Movie(string title, string director, string barcode, 
	double price, int copy, int demand)
	: m_title(title), m_director(director), StoreItem(barcode, price, copy, demand) {}


// returning the movie title
string Movie::getTitle() const {
	return m_title; }

// returning the director
string Movie::getDirector() const {
	return m_director; }



//This function returns a dynamically created StoreItem object
//which is created from a string.
//The string info must be of the line format specificed in
//inventory.txt
Movie* Movie::createFromString(const std::string info)
{
	// Declaring the variables to catch the incoming string 
	char trash; // <---------------- Getting a trash variable
	string a_movie, a_title, a_director, a_barcode, s_price, s_copy, s_demand;
	float a_price;
	int a_copy, a_demand;

	stringstream ss(info); // <----- Ussing the string stream function
						   // <----- string::size_type stringSize;

	ss >> trash; // <--------------- Getting the first '|' as trash out of the string 
				 // separating the info string into the corresponding variables
	
	getline(ss, a_movie,	DELIMITER);
	getline(ss, a_barcode,	DELIMITER);
	getline(ss, a_title,	DELIMITER);
	getline(ss, a_director, DELIMITER);
	getline(ss, s_price,	DELIMITER);
	getline(ss, s_copy,		DELIMITER);
	getline(ss, s_demand,	DELIMITER);
	// converting the strings into the float and ints variables 
	a_price =	stof(s_price.c_str());
	a_copy =	stoi(s_copy.c_str());
	a_demand =	stoi(s_demand.c_str());

	// generating a new movie object pointer type to be returned 
	Movie* aMovie = new Movie(a_title, a_director, a_barcode, a_price, a_copy, a_demand);
	return aMovie;

}




//Print current item to the screen
void Movie::printItem() 
{
	string stars = " *************** ";
	cout << stars	<< "Movie with the barcode "	<< getBarcode() << stars << endl;
	cout << "title \t\t"							<< getTitle() << endl;
	cout << "Director \t"							<< getDirector() << endl;
	cout << "Price \t\t"							<< getPrice() << endl;
	cout << "# of copy: \t"							<< getCopy() << endl;
	cout << "# of demand: \t"						<< getDemand() << endl;

	return;
}









