#include "flavor.h"

ostream& operator<<(ostream& out, const Flavor& f){
	out << "Name: " << f.name 
		<< "\nDescription: " << f.description 
		<< "\nWholesale Price: " << f.wholesale 
		<< "\nRetail Prince: " << f.retail
		<< "\nStock: " << f.stock 
		<< endl;
	return out;
}

//These will return the values entered by the user
string Flavor::returnName(){
	return name;
}

string Flavor::returnDescription(){
	return description;
}

double Flavor::returnWholesale(){
	return wholesale;	
}

double Flavor::returnRetail(){
	return retail;
}

int Flavor::returnStock(){
	return stock;
}