#include "flavor.h"
#include "container.h"
#include "toppings.h"
#include "store.h"
using namespace std;

int main(){
	Store myStore;
	
	Flavor vanilla("Vanilla", "Creamy vanilla flavored Ice cream", .50, 1.50, 10);
	Flavor chocolate("Chocolate", "Creamy chocolatey flavor", .75, 2.00, 12);
	Flavor cookies("Cookies and Cream", "An oreo based cookie and cream Ice cream", 1.00, 3.00, 15);
	
	Container sugar_cone("Sugar Cone", "Standard sugar coated ice cream cone", .50, 1.00, 15, 2);
	
	Toppings candy("Candy", "Sweet Caramel Topping", .25, .50, 20, 1);
	
	myStore.pushbackFlavors(vanilla);
	myStore.pushbackFlavors(chocolate);
	myStore.pushbackFlavors(cookies);
	myStore.pushbackToppings(candy);
	myStore.pushbackContainers(sugar_cone);
	
	cout<<myStore.returnContainer(0)<<endl;
	
	
	
	
	
	//cout <<"\n"<<candy.returnTopping()<<" We own" <<endl;
	return 0;
}
