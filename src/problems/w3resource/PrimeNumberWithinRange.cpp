// Write a program in C++ to find a prime number within a range.

#include <iostream>
using namespace std;

bool isEqual(int number)
{
    int count = 0;
    for (int index = 1; index < number / 2; index++)
    {
        if (number % index == 0)
        {
            count++;
        }
    }
    return count == 1;
}

int main()
{
    int startingValeu, endingValeu;
    cout << "Enter the starting value " << endl;
    cin >> startingValeu;
    cout << "Enter the ending value " << endl;
    cin >> endingValeu;

    for (int index = startingValeu; index <= endingValeu; index++)
    {
        if (isEqual(index))
        {
            cout << index << " ";
        }
    }
}