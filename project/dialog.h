#ifndef _DIALOGS_H
#define _DIALOGS_H

#include <iostream>
#include <gtkmm.h>
#include <vector>
using namespace std;

class Dialogs{
	public:
		//This will create a message to the user 
		static void message(string msg, string title = "Info");
	
		//This will create a question message that will allow the user to respond with a button
		static int question(string msg, string title = "Question", vector<string> buttons = {"Cancel", "Ok"});
	
		//This will request for a line of text input
		static string input(string msg, string title = "Input", string default_text = "", cancel_text = "CANCEL");
};