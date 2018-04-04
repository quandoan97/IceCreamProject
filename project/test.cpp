#include "flavor.h"
#include "container.h"
#include "toppings.h"
#include "store.h"
using namespace std;

int main(){
	Store myStore;
	
	Flavor vanilla("Vanilla", "Vanilla flavor", .50, 1.50, 10);
	
	Container sugar_cone("Sugar Cone", "Standard sugar coated ice cream cone", .50, 1.00, 15, 2);
	
	Toppings candy("Candy", "Sweet Caramel Topping", .25, .50, 20, 1);
	
	myStore.pushbackFlavors(vanilla);
	myStore.pushbackToppings(candy);
	myStore.pushbackContainers(sugar_cone);
	//cout<< candy <<endl;
	//cout<< sugar_cone << endl;
	//cout<< vanilla << endl;
	return 0;
}
