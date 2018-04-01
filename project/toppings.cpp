#include "toppings.h"

ostream& operator<<(ostream& out, const Toppings& t){
	
	out << "Name: " << t.name 
		<< "\nDescription: " << t.description 
		<< "\nWholesale Price: " << t.wholesale 
		<< "\nRetail Prince: " << t.retail
		<< "\nStock: " << t.stock 
		<< "\nRequested Topping Amount: " << t.topping_select
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