#include <iostream>
#include <vector>
#include "flavor.h"
#include "container.h"
#include "toppings.h"

class Store{
	private:
		vector<Flavor> totalFlavors;
		vector<Container> totalContainers;
		vector<Toppings> totalToppings;
	public:
		void pushbackFlavors(Flavor& item);		//Adds to flavors vector
		void pushbackToppings(Toppings& item);	//Adds to toppings vector
		void pushbackContainers(Container& item);	//Adds to Containers vector
	
		//These will print out all of the Flavors, Containers, and Toppings
		void printFlavors();
		void printContainers();
		void printToppings();
	
		//These will return a specific flavor
		Flavor returnFlavor(int index);
		Toppings returnTopping(int index);
		Container returnContainer(int index);
};