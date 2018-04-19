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
		Container(){}
		
		Container(string name, string description, double wholesale, double retail, int stock, int scoops){
			this->name = name;
			this->description = description;
			this->wholesale = wholesale;
			this->retail = retail;
			this->stock = stock;
			this->scoops = scoops;
		}
	
		//These will return the values eneterd in by the user
		string returnName()const;
		string returnDescription()const;
		double returnWholesale();
		double returnRetail()const;
		int returnStock();
		int returnScoops();
	
		//This will mess with the stock
		void restock();
		void consume();
		friend ostream& operator<<(ostream& out, const Container& c);
};
#endif