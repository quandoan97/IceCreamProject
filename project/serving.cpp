#include "serving.h"

double Serving::price(double flavorPrice, double toppingPrice, double containerPrice){
	double total = flavorPrice + toppingPrice + containerPrice;
	return total;
}

Flavor Serving::chooseFlavor(){
	string choice; 
	int choice;
	
	
	
}