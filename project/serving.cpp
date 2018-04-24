#include "serving.h"
#include "inventory.h"
double Serving::price(double flavorPrice, double toppingPrice, double containerPrice)const{
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
	string choice = Dialogs::input("How do you want your toppings served\n1.Light\n2.Normal\n3.Extra\n4.Drenched", "MICE"); 
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

Flavor Serving::getFlavor()const{
	return flavor;
}

Toppings Serving::getToppings()const{
	return topping;
}

Container Serving::getContainer()const{
	return container;
}

int Serving::getPrice()const{
	return _price;
}

string Serving::getToppingStyle()const{
	return topping_style;
}

string Serving::getCustomerName()const{
	return customer_name;
}

string Serving::getQuantity()const{
	return quantity;
}