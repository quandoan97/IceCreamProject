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
		string showFlavors()const;
		string showToppings()const;
		string showContainers()const;
	
		//These will get the flavors
		Flavor getFlavor(int index)const;
		Toppings getTopping(int index)const;
		Container getContainer(int index)const;
	
		//Easter Egg to add a bunch of flavors, containers, and Toppings
		void easter_egg();
};


#endif