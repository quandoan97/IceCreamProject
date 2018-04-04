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
		int scoops;
	public:
		Container(string name, string description, double wholesale, double retail, int stock, int scoops){
			this->name = name;
			this->description = description;
			this->wholesale = wholesale;
			this->retail = retail;
			this->stock = stock;
			this->scoops = scoops;
		}
	
	friend ostream& operator<<(ostream& out, const Container& c);
};
#endif