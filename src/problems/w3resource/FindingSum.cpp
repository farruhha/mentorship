#include <iostream>
using namespace std;
int main()
{
    // Writing a program to find the sum and product of all elements of an array
    int numbers[10];
    int sum = 0;
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; ++i)
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < 10; ++i)
    {
        sum = sum + numbers[i];
    }
    cout << "print the sum of Arr:" << sum;
    cout << endl;

    return 0;
}
