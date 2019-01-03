// WhoAreYou.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	cout << "Who are you? ";
	cin >> name;

	string greeting = "Hello, " + name;
	if (name == "Saahil" || name == "saahil")
	{
		greeting += ", I know you!";
	}

	cout << greeting << endl;

	int l = greeting.length(); // gets length of greeting, whether it ends in ", I know you!" or not.
	cout << "\"" + greeting + "\" is " << l << " characters long." << endl; // the backslash is an escape character indicating print a double quote
	auto space = greeting.find(' '); // finds the first space and returns a pointer to that space
	cout << space << endl;
	string beginning = greeting.substr(space + 1, name.length()); // goes to pointer "space+1" and returns length of string following it
	cout << beginning << endl;

	if (beginning == name)
	{
		cout << "expected result." << endl;
	}

	
	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
