#include <iostream>
#ifndef SERVER_H
#define SERVER_H

class Server{
	private: 
		string name;
		double salary;
		double paycheck;
	public:
		Server(){}
	
		Server(string name, double salary){
			this->name = name;
			this->salary = salary;
			this->paycheck = 0;
		}
		
		void payServer();
	
		//Getters
		string getName();
		double getSalary();
		double getPaycheck();
};

#endif
