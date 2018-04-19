#include "store.h"

//Create a Flavor, Container, or Toppping
void Store::createFlavor(){
	string name; 
	string description;
	double wholesale;
	double retail;
	int stock;
	
	cout << "What is the name of the Flavor" << endl;
	cin >> name;
				
	cout << "What is the description for this flavor" <<endl;
	cin >> description;
				
	cout << "What is the wholsale price" << endl;
	cin >> wholesale;
		
	cout << "What is the retail price" << endl;
	cin >> retail;
		
	cout << "How much much " << name << " is being delivered?" <<endl;
	cin >> stock;
	
	Flavor f(name, description, wholesale, retail, stock);
	
	totalFlavors.push_back(f);
}

void Store::createContainer(){
	string name; 
	string description;
	double wholesale;
	double retail;
	int stock;
	int scoops;
	
	cout << "What is the name of the Container" << endl;
	cin >> name;
				
	cout << "What is the description for this Container" <<endl;
	cin >> description;
				
	cout << "What is the wholsale price" << endl;
	cin >> wholesale;
		
	cout << "What is the retail price" << endl;
	cin >> retail;
		
	cout << "How much much " << name << " is being delivered?" <<endl;
	cin >> stock;
	
	cout << "How many scoops can this container hold" <<endl;
	cin >> scoops;
	
	Container c(name, description, wholesale, retail, stock, scoops);
	
	totalContainers.push_back(c);
}

void Store::createTopping(){
	string name; 
	string description;
	double wholesale;
	double retail;
	int stock;
	int topping_select;
	
	cout << "What is the name of the Topping" << endl;
	cin >> name;
				
	cout << "What is the description for this Topping" <<endl;
	cin >> description;
				
	cout << "What is the wholsale price" << endl;
	cin >> wholesale;
		
	cout << "What is the retail price" << endl;
	cin >> retail;
		
	cout << "How much much " << name << " is being delivered?" <<endl;
	cin >> stock;
	
	
	cout << "How will this be added?\n"
		 << "1. light\n2. Normal\n3. Extra\n4. Drenched"
		 << endl;
	cin >> topping_select;

	Toppings t(name, description, wholesale, retail, stock, topping_select);
	
	totalToppings.push_back(t);
}

//Add the items to there respected vectors
void Store::pushbackFlavors(Flavor& item){		
	totalFlavors.push_back(item);
}

void Store::pushbackToppings(Toppings& item){			
	totalToppings.push_back(item);
}

void Store::pushbackContainers(Container& item){		
	totalContainers.push_back(item);
}

//These will print out all of the Flavors, Containers, and Toppings
void Store::printFlavors(){
	for(int i =0; i<totalFlavors.size(); i++){
		cout<<totalFlavors[i]<<endl;
	}
}

void Store::printContainers(){
	for(int i =0; i<totalContainers.size(); i++){
		cout<<totalContainers[i]<<endl;
	}
}

void Store::printToppings(){
	for(int i =0; i<totalToppings.size(); i++){
		cout<<totalToppings[i]<<endl;
	}
}

void Store::printAll(){
	cout<< "*******\n"
		<< "Flavors\n"
		<< "*******\n"
		<<endl;
	printFlavors();
	cout<< "********\n"
		<< "Toppings\n"
		<< "********\n"
		<<endl;
	printToppings();
	cout<< "**********\n"
		<< "Containers\n"
		<< "**********\n"
		<<endl;
	printContainers();
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

//This willl create flavors, containers, and toppings
void Store::easter_egg(){
	//Flavors to add to the store
	Flavor vanilla("Vanilla", "Creamy vanilla flavored Ice cream", .50, 1.50, 25);
	pushbackFlavors(vanilla);
	Flavor chocolate("Chocolate", "Creamy chocolatey flavor", .50, 2.00, 25);
	pushbackFlavors(chocolate);
	Flavor cookies("Cookies and Cream", "An oreo based cookie and cream Ice cream", 1.00, 3.00, 25);
	pushbackFlavors(cookies);
	Flavor mint("Mint Chocolate Chip", "Dark chocolate in a creamy minty Ice cream", .75, 2.50, 25);
	pushbackFlavors(mint);
	Flavor brickle("Butter Brickle", "A toffee-centered chocolate-covered candy bar infused with vanilla Ice Cream", .80, 3.50, 25);
	pushbackFlavors(brickle);
	
	//Containers to add to the store
	Container sugar_cone("Sugar Cone", "Standard sugar coated ice cream cone", .50, 1.00, 25, 2);
	pushbackContainers(sugar_cone);
	Container plastic("Cup", "A boring flavorless plastic cup", .25, .75, 25, 4);
	pushbackContainers(plastic);
	Container waffle("Waffle Cone", "A waffle flavored cone", .35, 1.00, 25, 3);
	pushbackContainers(waffle);
	
	//Toppings to add to the store
	Toppings candy("Candy", "Sweet Caramel Topping", .25, .50, 20, 1);
	pushbackToppings(candy);
	Toppings chocolate_chips("Chocolate Chips", "Small hershey kisses", .25, .50, 20, 2);
	pushbackToppings(chocolate_chips);
	Toppings bears("Gummy Bears", "Sweet and chewy gummy bears", .35, .75, 20, 3);
	pushbackToppings(bears);
}









