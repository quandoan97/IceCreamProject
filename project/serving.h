#ifndef SERVING_H
#define SERVING_H
#include "flavor.h"
#include "toppings.h"
#include "container.h"
#include "inventory.h"
#include <iostream>

class Serving{
	private:
		Flavor flavor;
		Toppings topping;
		Container container;
	public:
		Serving (){}
		Serving(const Flavor& flavor, const Toppings& topping, const Container& container){
			this->flavor = flavor;
			this->topping = topping;
			this->container = container;
		}
		//Get the price
		double price(double flavorPrice, double toppingPrice, double containerPrice);
		
		Flavor chooseFlavor();
		Toppings chooseTopping();
		Container chooseContainer();
};

#endif