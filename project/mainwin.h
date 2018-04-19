#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <gtkmm.h>
#include <iostream>
#include <string>
#include <vector>
#include "toppings.h"
#include "flavor.h"
#include "container.h"

class Mainwin : public Gtk::Window {
	public:
		Mainwin();
		virtual ~Mainwin();
	protected:
		void on_create_order_click();		//Create a new order
		void on_create_flavor_click();		//Create a Flavor
		void on_create_topping_click();		//Create a Topping
		void on_create_container_click();	//Create a Container
		void on_quit_click();
	private:
		
	
		std::vector<Flavor> totalFlavors;				//All defined flavors
		std::vector<Container> totalContainers;			//All defined Container
		std::vector<Toppings> totalToppings;			//All defined Toppings
		
};

#endif