#include "flavor.h"
#include "container.h"
#include "toppings.h"
using namespace std;

int main(){
	Flavor vanilla("Vanilla", "Vanilla flavor", .50, 1.50, 10);
	
	Container sugar_cone("Sugar Cone", "Standard sugar coated ice cream cone", .50, 1.00, 15, 2);
	
	Toppings candy("Candy", "Sweet Caramel Topping", .25, .50, 20, 1);
	
	cout<< candy <<endl;
	cout<< sugar_cone << endl;
	cout<< vanilla << endl;
	return 0;
}
