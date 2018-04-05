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
