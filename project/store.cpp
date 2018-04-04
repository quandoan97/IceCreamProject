#include "store.h"

void Store::pushbackFlavors(Flavor& item){		//Adds to Flavors vector
	totalFlavors.push_back(item);
	cout << totalFlavors[0]<<endl;
}

void Store::pushbackToppings(Toppings& item){			//Adds to toppings vector
	totalToppings.push_back(item);
	cout << totalToppings[0]<<endl;
}

void Store::pushbackContainers(Container& item){		//Adds to Containers vector
	totalContainers.push_back(item);
	cout << totalContainers[0]<<endl;
}