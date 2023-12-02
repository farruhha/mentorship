#include <iostream>
using namespace std;

/***
 * Print all the numbers from 0 to number.
 *
 */
int main()
{
    cout << "ENTER NUMBER OF INTEGER:" << endl;
    int number;
    cin >> number;

    // for (int index = 0; index <= number; index += 2)
    // {
    //     cout << "Next even number is " << index << endl;
    // }

    int value = 0;

    value += 2; //"value = value + 2";
    value *= 2; // "value = value * 2";
    value /= 2; //"value = value / 2";
    value %= 2; // "value = value % 2";

    /**
     * Take a number N, if the number N is even, take all even numbers less than N and divide it by 2 and plus 1, return sum;
     *
     * if N is odd, take all the odd numbers less than N and divide it by 2 and return sum;
     *
     */

    double sum = 0;
    if (number % 2 == 0)
    {
        for (int index = 0; index < number; index += 2)
        {
            sum += (index / 2 + 1); // sum = sum + (index/2 + 1);
        }
    }
    else
    {
        for (int index = 1; index < number; index += 2)
        {
            sum += (double)(index / 2.0); // sum = sum + index/2.0;
        }
    }

    cout << "Result: " << sum << endl;
}
