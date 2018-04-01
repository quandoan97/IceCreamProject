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