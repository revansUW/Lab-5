
// Lab 5
// Ryan Evans

#pragma once

#include <iostream>
#include<list>
using namespace std;

class MyStack
{
public:

	// push "c" onto the top of the stack
	void push(char& c);

	// check if the stack is empty
	bool isEmpty() const;

	// Return a copy
	string pull();

	//reverse the input string using MyStack
	string stringReversal4(string input);

	list<char> vec;

private:
	char c;
	string input;
	string output;
};

//reverse the input string with vector
string stringReversal1(string input);

//reverse the input string with stack
string stringReversal2(string input);

//reverse the input string with list
string stringReversal3(string input);