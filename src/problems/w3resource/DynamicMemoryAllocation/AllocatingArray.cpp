// 2. Write a C++ program to dynamically allocate an array of integers and strings and initialize its elements.
#include <iostream>
using namespace std;

int main()
{
    int size = 3;
    int *dynamicInt = new int[size];
    for (int index = 0; index < size; index++)
    {

        dynamicInt[index] = (index + 10) / 2;
    }
    string *dynamicString = new string[size];
    for (int index = 0; index < size; index++)
    {

        dynamicString[index] = index + 64;
    }

    cout << "Dynamicly allocated integer array:" << endl;
    for (int index = 0; index < size; index++)
    {
        cout << dynamicInt[index] << " " << endl;
    }
    cout << "Dynamicly allocated string array:" << endl;

    for (int index = 0; index < size; index++)
    {

        cout << dynamicString[index] << " " << endl;
    }

    delete[] dynamicInt;
    delete[] dynamicString;

    return 0;
}
