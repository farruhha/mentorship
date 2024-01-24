#include <iostream>
using namespace std;

int main()
{
   //1. Write a C++ program to dynamically allocate an integer, a character and a string and assign a value to them.

    int *dynamicInt = new int;
    *dynamicInt = 15;

    char *dynamicChar = new char;
    *dynamicChar = 'letter';

    string *dynamicString = new string;
    *dynamicString = "Hello, dynamic allocation!";

    cout << "Dynamic Integer: " << *dynamicInt << endl;
    cout << "Dynamic Character: " << *dynamicChar << endl;
    cout << "Dynamic String: " << *dynamicString << endl;

    delete dynamicInt;
    delete dynamicChar;
    delete dynamicString;

    return 0;
}
