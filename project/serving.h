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
		string customer_name;
		string quantity;
	public:
		Serving (){}
		Serving(const Flavor& flavor, const Toppings& topping, const Container& container, string customer_name, string quantity){
			this->flavor = flavor;
			this->topping = topping;
			this->container = container;
			this->_price = price(flavor.returnRetail(), topping.returnRetail(), container.returnRetail());
			this->topping_style = chooseTopStyle();
			this->customer_name = customer_name;
			this->quantity = quantity;
		}
		//Get the price
		double price(double flavorPrice, double toppingPrice, double containerPrice)const;
		
		Flavor chooseFlavor(const Inventory& inventory);
		Toppings chooseTopping(const Inventory& inventory);
		string chooseTopStyle();
		Container chooseContainer(const Inventory& inventory);
	
		//Getters
		Flavor getFlavor()const;
		Toppings getToppings()const;
		Container getContainer()const;
		int getPrice()const;
		string getToppingStyle()const;
		string getCustomerName()const;
		string getQuantity()const;
};

#endif