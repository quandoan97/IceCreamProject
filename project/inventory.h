#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include "flavor.h"
#include "container.h"
#include "toppings.h"
#include <vector>
#include <gtkmm.h>

class Inventory{
	private:
		vector<Flavor> totalFlavors;
		vector<Container> totalContainers;
		vector<Toppings> totalToppings;
	public:
		//These will create the flavors, toppings, and containers
		void createFlavor();
		void createTopping();
		void createContainer();
		//These will show all the flavors, toppings, and containers
		void showFlavors();
		void showToppings();
		void showContainers();
};


#endif