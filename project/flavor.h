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
		Flavor(string name, string description, double wholesale, double retail, int stock){
			this->name = name;
			this->description = description;
			this->wholesale = wholesale;
			this->retail = retail;
			this->stock = stock;
		}
	
	friend ostream& operator<<(ostream& out, const Flavor& f);
};
#endif