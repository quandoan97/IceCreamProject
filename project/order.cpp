#include "order.h"

void Order::createServing(const Inventory& inventory){
	Serving s;
	Dialogs::message("Create An Order!", "MICE");
	Flavor f(s.chooseFlavor(inventory));
	Toppings t(s.chooseTopping(inventory));
	Container c(s.chooseContainer(inventory));
	
	Serving serve(f, t, c);
	totalServing.push_back(serve);
}