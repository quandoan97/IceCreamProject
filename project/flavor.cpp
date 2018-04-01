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