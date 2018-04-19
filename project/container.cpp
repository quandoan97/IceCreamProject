#include "container.h"

ostream& operator<<(ostream& out, const Container& c){
	out << "Name: " << c.name 
		<< "\nDescription: " << c.description 
		<< "\nWholesale Price: " << c.wholesale 
		<< "\nRetail Prince: " << c.retail
		<< "\nStock: " << c.stock 
		<< "\nScoops: " << c.scoops
		<< endl;
	return out;
}

//These will return the values entered by the user
string Container::returnName(){
	return name;
}

string Container::returnDescription(){
	return description;
}

double Container::returnWholesale(){
	return wholesale;	
}

double Container::returnRetail(){
	return retail;
}

int Container::returnStock(){
	return stock;
}

int Container::returnScoops(){
	return scoops;
}

void Container::restock(){
	stock = 25;
}

void Container::consume(){
	--stock;
}