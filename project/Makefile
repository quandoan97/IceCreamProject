CXXFLAGS += --std=c++14
GTKFLAGS = '/usr/bin/pkg-config gtkmm-3.0 --cflags --libs'


test: test.o flavor.o container.o toppings.o store.o order.o
	$(CXX) $(CXXFLAGS) -o test test.o flavor.o container.o toppings.o store.o order.o
	
test.o: test.cpp *.h
	$(CXX) $(CXXFLAGS) -c test.cpp

flavor.o: flavor.cpp *h
	$(CXX) $(CXXFLAGS) -c flavor.cpp
	
container.o: container.cpp *h
	$(CXX) $(CXXFLAGS) -c container.cpp

toppings.o: toppings.cpp *h
	$(CXX) $(CXXFLAGS) -c toppings.cpp
	
store.o: store.cpp *h
	$(CXX) $(CXXFLAGS) -c store.cpp
	
order.o: order.cpp *h
	$(CXX) $(CXXFLAGS) -c order.cpp