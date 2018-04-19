#include "serving.h"
#include "inventory.h"
double Serving::price(double flavorPrice, double toppingPrice, double containerPrice){
	double total = flavorPrice + toppingPrice + containerPrice;
	return total;
}

Flavor Serving::chooseFlavor(const Inventory& inventory){
	string choice = Dialogs::input(inventory.showFlavors(), "MICE"); 
	int _choice = stoi(choice)-1;
	return inventory.getFlavor(_choice);
}

Toppings Serving::chooseTopping(const Inventory& inventory){
	string choice = Dialogs::input(inventory.showToppings(), "MICE"); 
	int _choice = stoi(choice)-1;
	return inventory.getTopping(_choice);
}

Container Serving::chooseContainer(const Inventory& inventory){
	string choice = Dialogs::input(inventory.showContainers(), "MICE"); 
	int _choice = stoi(choice)-1;
	return inventory.getContainer(_choice);
}

string Serving::chooseTopStyle(){
	string choice = Dialogs::input("1.Light\n2.Normal\n3.Extra\n4.Drenched", "MICE"); 
	int selection = stoi(choice);
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