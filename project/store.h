#include <iostream>
#include <vector>
#include "flavor.h"
#include "container.h"
#include "toppings.h"
#ifndef STORE_H
#define STORE_H

class Store{
	private:
		Inventory inventory;
		vector <Server> servers;
		Manager manager;
		vector <Customer> customers;
		double cash_register;		
	public:
		Store(){}
		
		void addtoInventory();
		
		
};
#endif