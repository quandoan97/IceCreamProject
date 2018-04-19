#include <iostream>
#ifndef FLAVOR_H
#define FLAVOR_H
using namespace std;

class Flavor{
	private:
		string name;
		string description;
		double wholesale;
		double retail;
		int stock;
	public:
		Flavor(){}
		
		Flavor(string name, string description, double wholesale, double retail, int stock){
			this->name = name;
			this->description = description;
			this->wholesale = wholesale;
			this->retail = retail;
			this->stock = stock;
		}
	
		//These will return the values eneterd in by the user
		string returnName();
		string returnDescription();
		double returnWholesale();
		double returnRetail();
		int returnStock();
	
		//This will mess with the stock
		void restock();
		void consume();
		friend ostream& operator<<(ostream& out, const Flavor& f);
};
#endif