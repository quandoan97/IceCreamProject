#include "order.h"

void Order::createServing(const Inventory& inventory){
	Serving s;
	Dialogs::message("Create An Order!", "MICE");
	Flavor f(s.chooseFlavor(inventory));
	Toppings t(s.chooseTopping(inventory));
	Container c(s.chooseContainer(inventory));
	string name = Dialogs::input("Name of Customer", "MICE");
	string quantity = Dialogs::input("How many orders would you like", "MICE");
	
	Serving serve(f, t, c, name, quantity);
	totalServing.push_back(serve);
}

void Order::showServing(){
	Dialogs::message(getOrder(totalServing[0]), "MICE");
}

string Order::getOrder(const Serving& s){
	int quantity = stoi(s.getQuantity());
	double totalPrice = quantity*s.price(s.getFlavor().returnRetail(), s.getToppings().returnRetail(), s.getContainer().returnRetail());
	
	string serving = "An order for " + s.getCustomerName() 
		+ " for " + s.getQuantity() 
		+ " " + s.getFlavor().returnName()
		+ " Ice Cream with "
		+ s.getToppingStyle() + " " + s.getToppings().returnName()
		+ " for a total of " + std::to_string(totalPrice) + " dollars";
	return serving;
}

