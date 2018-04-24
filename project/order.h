#ifndef ORDER_H
#define ORDER_H
#include "serving.h"
#include "inventory.h"
class Order{
	private:
		vector<Serving> totalServing;
		Inventory inventory;
	public:
		void createServing(const Inventory& inventory);
		void showServing();
		string getOrder(const Serving& s);
};

#endif