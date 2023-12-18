// Write a program in C++ to find the sum of the first 10 natural numbers.
#include <iostream>
using namespace std;

int main()
{
    int number;
    int sum = 0;
    cout << "Enter the number:";
    cin >> number;

    for (int index = 0; index <= number; index++)
    {
        sum += index;
    }
    cout << "Valeu of sum:" << sum << endl;
}