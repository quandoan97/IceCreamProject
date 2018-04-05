#include "store.h"

void Store::pushbackFlavors(Flavor& item){		//Adds to Flavors vector
	totalFlavors.push_back(item);
}

void Store::pushbackToppings(Toppings& item){			//Adds to toppings vector
	totalToppings.push_back(item);
}

void Store::pushbackContainers(Container& item){		//Adds to Containers vector
	totalContainers.push_back(item);
}

//These will print out all of the Flavors, Containers, and Toppings
void Store::printFlavors(){
	for(int i =0; i<totalFlavors.size(); i++){
		cout<<totalFlavors[i]<<endl;
	}
}

void Store::printContainers(){
	for(int i =0; i<totalFlavors.size(); i++){
		cout<<totalContainers[i]<<endl;
	}
}

void Store::printToppings(){
	for(int i =0; i<totalFlavors.size(); i++){
		cout<<totalToppings[i]<<endl;
	}
}

//These will return a specific flavor
Flavor Store::returnFlavor(int index){
	return totalFlavors[index];
}

Container Store::returnContainer(int index){
	return totalContainers[index];
}

Toppings Store::returnTopping(int index){
	return totalToppings[index];
}
