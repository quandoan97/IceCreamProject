#include "flavor.h"
using namespace std;
void addtoVector(Flavor flavorToAdd, vector<Flavor> flavors){
	flavors.push_back(flavorToAdd);
}

void printFlavors(vector<Flavor> flavors){
	for(unsigned int i = 0; i < flavors.size(); i++){
		cout << flavors[i] << " ";
	}
}