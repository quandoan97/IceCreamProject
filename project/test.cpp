#include "inventory.h"
#include "order.h"
#include "mainwin.h"
#include <iostream>
#include <gtkmm.h>
#include "serving.h"
using namespace std;

int main(int argc, char* argv[]){
	
	Gtk::Main kit(argc, argv);
	
	Inventory inventory;
	
	inventory.easter_egg();
	
	Order o;
	
	o.createServing(inventory);
	
	
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
