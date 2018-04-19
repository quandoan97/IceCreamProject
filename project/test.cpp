#include "inventory.h"
#include "mainwin.h"
#include <iostream>
#include <gtkmm.h>
#include "serving.h"
using namespace std;

int main(int argc, char* argv[]){
	
	Gtk::Main kit(argc, argv);
	
	Inventory store;
	Flavor vanilla("Vanilla", "Creamy vanilla flavored Ice cream", .50, 1.50, 25);
	Container sugar_cone("Sugar Cone", "Standard sugar coated ice cream cone", .50, 1.00, 25, 2);
	Toppings candy("Candy", "Sweet Caramel Topping", .25, .50, 20);
	Serving s(vanilla, candy, sugar_cone);
	
	cout<< s.price(vanilla.returnRetail(), sugar_cone.returnRetail(), candy.returnRetail()) <<endl;
	
	/*store.createFlavor();

    dialog->close();
    while (Gtk::Main::events_pending())  Gtk::Main::iteration();

    delete dialog;
	Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "edu.uta.cse1325.mice"); 
	
	Mainwin win;
	
	win.set_title("Hello World");
	
	return app->run(win);
	*/
	
	return 0;
}
