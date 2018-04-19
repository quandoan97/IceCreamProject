#ifndef ORDER_H
#define ORDER_H
#include "serving.h"
class Order{
	private:
		vector<Serving> totalServing;
	public:
		
		
		void createOrder();
		void showOrder();
};

#endif