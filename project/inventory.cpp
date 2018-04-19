#include "inventory.h"
#include "dialogs.h"
#include <string>
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

string Inventory::showFlavors()const{
	string flavorList = "";
	for(int i = 0; i<totalFlavors.size(); i++){
		string str = to_string(totalFlavors[i].returnRetail());
		str.erase(str.find_last_not_of('0')+1, std::string::npos);
		flavorList +=  to_string(i+1) + ". " + totalFlavors[i].returnName() + " " +totalFlavors[i].returnDescription() + " " + str + "\n";
	}
	return flavorList;
}

string Inventory::showToppings()const{
	string toppingList = "";
	for(int i = 0; i<totalToppings.size(); i++){
		string str = to_string(totalToppings[i].returnRetail());
		str.erase(str.find_last_not_of('0')+1, std::string::npos);
		toppingList +=  to_string(i+1) + ". " + totalToppings[i].returnName() + " " +totalToppings[i].returnDescription() + " " + str + "\n";
	}
	return toppingList;
}

string Inventory::showContainers()const{
	string containerList = "";
	for(int i = 0; i<totalContainers.size(); i++){
		string str = to_string(totalContainers[i].returnRetail());
		str.erase(str.find_last_not_of('0')+1, std::string::npos);
		containerList +=  to_string(i+1) + ". " + totalContainers[i].returnName() + " " +totalContainers[i].returnDescription() + " " + str + "\n";
	}
	return containerList;
}

Flavor Inventory::getFlavor(int index)const{
	return totalFlavors[index];
}

Toppings Inventory::getTopping(int index)const{
	return totalToppings[index];
}

Container Inventory::getContainer(int index)const{
	return totalContainers[index];
}

void Inventory::easter_egg(){
	//Flavors to add to the store
	Flavor vanilla("Vanilla", "Creamy vanilla flavored Ice cream", .50, 1.50, 25);
	totalFlavors.push_back(vanilla);
	Flavor chocolate("Chocolate", "Creamy chocolatey flavor", .50, 2.00, 25);
	totalFlavors.push_back(chocolate);
	Flavor cookies("Cookies and Cream", "An oreo based cookie and cream Ice cream", 1.00, 3.00, 25);
	totalFlavors.push_back(cookies);
	Flavor mint("Mint Chocolate Chip", "Dark chocolate in a creamy minty Ice cream", .75, 2.50, 25);
	totalFlavors.push_back(mint);
	Flavor brickle("Butter Brickle", "A toffee-centered chocolate-covered candy bar infused with vanilla Ice Cream", .80, 3.50, 25);
	totalFlavors.push_back(brickle);
	
	//Containers to add to the store
	Container sugar_cone("Sugar Cone", "Standard sugar coated ice cream cone", .50, 1.00, 25, 2);
	totalContainers.push_back(sugar_cone);
	Container plastic("Cup", "A boring flavorless plastic cup", .25, .75, 25, 4);
	totalContainers.push_back(plastic);
	Container waffle("Waffle Cone", "A waffle flavored cone", .35, 1.00, 25, 3);
	totalContainers.push_back(waffle);
	
	//Toppings to add to the store
	Toppings candy("Candy", "Sweet Caramel Topping", .25, .50, 20);
	totalToppings.push_back(candy);
	Toppings chocolate_chips("Chocolate Chips", "Small hershey kisses", .25, .50, 20);
	totalToppings.push_back(chocolate_chips);
	Toppings bears("Gummy Bears", "Sweet and chewy gummy bears", .35, .75, 20);
	totalToppings.push_back(bears);
}