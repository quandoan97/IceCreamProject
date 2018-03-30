#include <iostream>
#include <vector>
using namespace std;

class Flavor{
	private:
		string name;
		string description;
		double wholesale;
		double retail;
		int stock;
	public:
		Fuse(string name, string description, double wholesale, double retail, int stock){
			this->name = name;
			this->description = description;
			this->wholesale = wholesale;
			this->retail = retail;
			this->stock = stock;
		}
	
	vector<Flavor> flavors;
	
	//this will add the flavor to a vector and store it for later use
	void addtoVector(Flavor flavorToAdd, vector<Flavor> flavors);
};