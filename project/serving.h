#ifndef SERVING_H
#define SERVING_H
#include "flavor.h"
#include "toppings.h"
#include "container.h"
#include "inventory.h"
#include "dialogs.h"
#include <iostream>

class Serving{
	private:
		Flavor flavor;
		Toppings topping;
		Container container;
		int _price;
		string topping_style;
	public:
		Serving (){}
		Serving(const Flavor& flavor, const Toppings& topping, const Container& container){
			this->flavor = flavor;
			this->topping = topping;
			this->container = container;
			this->_price = price(flavor.returnRetail(), topping.returnRetail(), container.returnRetail());
			this->topping_style = chooseTopStyle();
		}
		//Get the price
		double price(double flavorPrice, double toppingPrice, double containerPrice);
		
		Flavor chooseFlavor(const Inventory& inventory);
		Toppings chooseTopping(const Inventory& inventory);
		string chooseTopStyle();
		Container chooseContainer(const Inventory& inventory);
};

#endif