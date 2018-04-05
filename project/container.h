#include <iostream>
#ifndef CONTAINER_H
#define CONTAINER_H

using namespace std; 

class Container{
	private:
		string name;
		string description;
		double wholesale;
		double retail;
		int stock;
		int scoops; // number of scoops
	public:
		Container(string name, string description, double wholesale, double retail, int stock, int scoops){
			this->name = name;
			this->description = description;
			this->wholesale = wholesale;
			this->retail = retail;
			this->stock = stock;
			this->scoops = scoops;
		}
	
	//These will return the values eneterd in by the user
	string returnName();
	string returnDescription();
	double returnWholesale();
	double returnRetail();
	int returnStock();
	int returnScoops();
	
	friend ostream& operator<<(ostream& out, const Container& c);
};
#endif