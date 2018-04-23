#include "order.h"

void Order::createServing(const Inventory& inventory){
	Serving s;
	Dialogs::message("Create An Order!", "MICE");
	Flavor f(s.chooseFlavor(inventory));
	Toppings t(s.chooseTopping(inventory));
	Container c(s.chooseContainer(inventory));
	string name = Dialogs::input("Name of Customer", "MICE");
	
	Serving serve(f, t, c, name);
	totalServing.push_back(serve);
}

void Order::showServing(){
	
}