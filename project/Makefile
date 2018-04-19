CXXFLAGS += -std=c++14
GTKFLAGS = `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`


test: test.o flavor.o container.o toppings.o mainwin.o inventory.o dialogs.o serving.o order.o
	$(CXX) $(CXXFLAGS) -o test test.o flavor.o container.o toppings.o mainwin.o inventory.o dialogs.o serving.o order.o $(GTKFLAGS)
	
test.o: test.cpp *.h
	$(CXX) $(CXXFLAGS) -c test.cpp $(GTKFLAGS)

flavor.o: flavor.cpp *h
	$(CXX) $(CXXFLAGS) -c flavor.cpp 
	
container.o: container.cpp *h
	$(CXX) $(CXXFLAGS) -c container.cpp 

toppings.o: toppings.cpp *h
	$(CXX) $(CXXFLAGS) -c toppings.cpp 
	
mainwin.o: mainwin.cpp *h 
	$(CXX) $(CXXFLAGS) -c mainwin.cpp $(GTKFLAGS)
	
inventory.o: inventory.cpp *h 
	$(CXX) $(CXXFLAGS) -c inventory.cpp $(GTKFLAGS)

dialogs.o: dialogs.cpp *h
	$(CXX) $(CXXFLAGS) -c dialogs.cpp $(GTKFLAGS)
	
serving.o: serving.cpp *h 
	$(CXX) $(CXXFLAGS) -c serving.cpp $(GTKFLAGS)
	
order.o: order.cpp *h
	$(CXX) $(CXXFLAGS) -c order.cpp $(GTKFLAGS)
	
clean: 
	-rm -f *.o test