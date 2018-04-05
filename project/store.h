#include <iostream>
#include <vector>
#include "flavor.h"
#include "container.h"
#include "toppings.h"
#ifndef STORE_H
#define STORE_H

class Store{
	private:
		vector<Flavor> totalFlavors;
		vector<Container> totalContainers;
		vector<Toppings> totalToppings;
	public:
		//Create a Flavor, Container, or Topping
		void createFlavor();
		void createTopping();
		void createContainer();
	
		//Add the items to there respected vectors
		void pushbackFlavors(Flavor& item);
		void pushbackToppings(Toppings& item);
		void pushbackContainers(Container& item);
	
		//These will print out all of the Flavors, Containers, and Toppings
		void printFlavors();
		void printContainers();
		void printToppings();
	
		//These will return a specific flavor
		Flavor returnFlavor(int index);
		Toppings returnTopping(int index);
		Container returnContainer(int index);
};
#endif