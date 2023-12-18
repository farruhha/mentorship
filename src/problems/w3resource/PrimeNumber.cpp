// Write a program in C++ to check whether a number is prime or not.

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a number" << endl;
    int number;
    cin >> number;
    int count = 0;
    // 10 --> 1, 2, 3, 4, 5,
    // 11 --> 1, 2, 3, 4, 5
    for (int index = 1; index <= number / 2; index++)
    {
        if (number % index == 0)
        {
            count++;
        }
    }

    if (count == 1)
    {
        cout << number << " is a prime number " << endl;
    }
    else
    {
        cout << number << " is not a prime number " << endl;
    }
}