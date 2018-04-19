#include "inventory.h"
#include "dialogs.h"

void Inventory::createFlavor(){
	Dialogs::message("Let's Create a Flavor","Ice Cream Emporium");
	string name = Dialogs::input("What is the Flavor's name?", "Ice Cream Emporium");
	string description = Dialogs::input("What is the description for this flavor?", "Ice Cream Emporium");
	string wholesale = Dialogs::input("How much did you buy it for?", "Ice Cream Emporium");
	string retail = Dialogs::input("How much are you going to sell it for?", "Ice Cream Emporium");
	string stock = Dialogs::input("How many did you buy?", "Ice Cream Emporium");	
	
	double _wholesale = stod(wholesale);
	double _retail = stod(retail);
	int _stock = stoi(stock);
	
	Flavor f(name, description, _wholesale, _retail, _stock);
	totalFlavors.push_back(f);
	
	cout<< f <<endl;
}
	
void Inventory::createTopping(){
	Dialogs::message("Let's Create a Topping","Ice Cream Emporium");
	string name = Dialogs::input("What is the Topping's name?", "Ice Cream Emporium");
	string description = Dialogs::input("What is the description for this Topping?", "Ice Cream Emporium");
	string wholesale = Dialogs::input("How much did you buy it for?", "Ice Cream Emporium");
	string retail = Dialogs::input("How much are you going to sell it for?", "Ice Cream Emporium");
	string stock = Dialogs::input("How many did you buy?", "Ice Cream Emporium");	
	
	
	double _wholesale = stod(wholesale);
	double _retail = stod(retail);
	int _stock = stoi(stock);
	
	Toppings t(name, description, _wholesale, _retail, _stock);
	totalToppings.push_back(t);
}

void Inventory::createContainer(){
	Dialogs::message("Let's Create a Container","Ice Cream Emporium");
	string name = Dialogs::input("What is the Container's name?", "Ice Cream Emporium");
	string description = Dialogs::input("What is the description for this Container?", "Ice Cream Emporium");
	string wholesale = Dialogs::input("How much did you buy it for?", "Ice Cream Emporium");
	string retail = Dialogs::input("How much are you going to sell it for?", "Ice Cream Emporium");
	string stock = Dialogs::input("How many did you buy?", "Ice Cream Emporium");	
	string scoop = Dialogs::input("How many scoops can it hold?", "Ice Cream Emporium");
	
	double _wholesale = stod(wholesale);
	double _retail = stod(retail);
	int _stock = stoi(stock);
	int _scoop = stoi(scoop);
	
	Container c(name, description, _wholesale, _retail, _stock, _scoop);
	totalContainers.push_back(c);
}

void Inventory::showFlavors(){
	for(int i =0; i<totalFlavors.size(); i++){
		cout<<totalFlavors[i]<<endl;
	}
}

void Inventory::showContainers(){
	for(int i =0; i<totalContainers.size(); i++){
		cout<<totalContainers[i]<<endl;
	}
}

void Inventory::showToppings(){
	for(int i =0; i<totalToppings.size(); i++){
		cout<<totalToppings[i]<<endl;
	}
}