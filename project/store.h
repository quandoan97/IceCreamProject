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
};