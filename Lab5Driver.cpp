
// Lab 5
// Ryan Evans

#include <iostream>
#include"Lab5MyStack.h"
#include<string>
using namespace std;

int main()
{
	MyStack myStack;

	string str1;	 //test stringReversal1
	cout << "Please enter a string to reverse: ";
	cin >> str1;
	cout << endl;
	cout << stringReversal1(str1) << endl;


	cout << endl;
	string str2;		 //test stringReversal2
	cout << "Please enter a string to reverse: ";
	cin >> str2;
	cout << endl;
	cout << stringReversal2(str2) << endl;

	cout << endl;
	string str3;		//test stringReversal3
	cout << "Please enter a string to reverse: ";
	cin >> str3;
	cout << endl;
	cout << stringReversal3(str3) << endl;

	cout << endl;
	string str4;		//test stringReversal4
	cout << "Please enter a string to reverse: ";
	cin >> str4;
	cout << endl;
	cout << myStack.stringReversal4(str4) << endl;

	system("pause");
	return 0;

}