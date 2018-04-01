#include <iostream>

using namespace std; 

class Toppings{
	private:
		string name;
		string description;
		double wholesale;
		double retail;
		int stock;
		string topping_select; // 1. Light, 2. Normal, 3. Extra, 4. Drenched
	public:
		Toppings(string name, string description, double wholesale, double retail, int stock, int topping_select){
			this->name = name;
			this->description = description;
			this->wholesale = wholesale;
			this->retail = retail;
			this->stock = stock;
			this->topping_select = select_to_string(topping_select);
		}
	
	string select_to_string(int selection);
	
	friend ostream& operator<<(ostream& out, const Toppings& c);
};