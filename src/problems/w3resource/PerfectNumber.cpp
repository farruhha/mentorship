// Write a program in C++ to find the perfect numbers between 1 and 500.
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a number" << endl;
    int number;
    cin >> number;
    int sum = 0;
    // 6 = 1 + 2 + 3;
    // 28 = 1 + 2 + 4 + 7 + 14
    for (int index = 1; index <= number / 2; index++)
    {
        if (number % index == 0)
        {
            sum += index;
        }
    }

    if (sum == number)
    {
        cout << number << " is a perfect number" << endl;
    }
    else
    {
        cout << number << " is not a perfect number" << endl;
    }
}