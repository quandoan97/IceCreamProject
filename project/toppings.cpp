#include "toppings.h"

ostream& operator<<(ostream& out, const Toppings& t){
	out << "Name: " << t.name 
		<< "\nDescription: " << t.description 
		<< "\nWholesale Price: " << t.wholesale 
		<< "\nRetail Prince: " << t.retail
		<< "\nStock: " << t.stock 
		<< endl;
	return out;
}

string Toppings::select_to_string(int selection){
	if(selection == 1){
		return "light";
	}else if(selection == 2){
		return "normal";
	}else if(selection == 3){
		return "extra";
	}else if(selection == 4){
		return "drenched";
	}else{
		return "Not a valid choice";
	}
}

//These will return the values entered by the user
string Toppings::returnName()const{
	return name;
}

string Toppings::returnDescription()const{
	return description;
}

double Toppings::returnWholesale(){
	return wholesale;	
}

double Toppings::returnRetail()const{
	return retail;
}

int Toppings::returnStock(){
	return stock;
}

string Toppings::returnTopping(){
	return topping_select;
}

void Toppings::restock(){
	stock = 25;
}

void Toppings::consume(){
	--stock;
}