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
string Flavor::returnName()const{
	return name;
}

string Flavor::returnDescription()const{
	return description;
}

double Flavor::returnWholesale(){
	return wholesale;	
}

double Flavor::returnRetail()const{
	return retail;
}

int Flavor::returnStock(){
	return stock;
}

void Flavor::restock(){
	stock = stock + 25;
}

void Flavor::consume(){
	--stock;
}