
// Lab5
// Ryan Evans

#include"Lab5MyStack.h"
#include <vector>
#include <stack>
using namespace std;

bool MyStack::isEmpty() const
{
	return vec.size() == 0;
}

void MyStack::push(char& c)
{
	vec.push_back(c);
}

string MyStack::pull()
{
	while (vec.size() != 0)	//empties the list and puts its contents into a string
	{
		char temp = vec.back();
		output += temp;
		vec.pop_back();
	}
	return output;
}

string stringReversal1(string input)
{
	stack<char> stack1;

	for (char& c : input)	//iterate through input
	{
		char item = c;		//add each chat in input to the stack
		stack1.push(item);  //using push, the first char in the input will be at the back,
						   //this will make the string stored in the stack reversed
	}

	string output;

	while (!(stack1.empty()))	//empties the list and puts its contents into a string
	{
		char temp = stack1.top();
		output += temp;	
		stack1.pop();
	}
	return output;
}

string stringReversal2(string input)
{
	vector<char> vec2;				

	for (char& c : input)	//iterate through input
	{
		char item = c;		//add each chat in input to the stack	
		vec2.push_back(item);  //using push, the first char in the input will be at the back,
							  //this will make the string stored in the stack reversed
	}

	string output;

	while (!(vec2.empty()))	//empties the list and puts its contents into a string
	{
		char temp = vec2.back();			
		output += temp;
		vec2.pop_back();
	}
	return output;
}

string stringReversal3(string input)
{
	list<char> list3;				

	for (char& c : input)	//iterate through input
	{	
		char item = c;			//add each chat in input to the stack
		list3.push_back(item);  //using push, the first char in the input will be at the back,
						  	   //this will make the string stored in the stack reversed
	}
	string output;

	while (!(list3.empty()))		//empties the list and puts its contents into a string
	{
		char temp = list3.back();			
		output += temp;				
		list3.pop_back();				
	}			
	return output;
}

string MyStack::stringReversal4(string input)
{
	for (char& c : input)	//iterate through input
	{
		char item = c;	//add each chat in input to the stack
		push(item);  //using push, the first char in the input will be at the back,
					//this will make the string stored in the stack reversed
	}
	output = pull();
	return output;
}