#include <iostream>
using namespace std;

/***
 * Given an integer number and we have to find/print its binary value using C program.
 * Let's image it's 16 bits number for the sake of simplicity.
 */

int main()
{

    cout << "ENTER NUMBER OF INTEGER:" << endl;
    int number;
    cin >> number;
    string result;

    for (int shift = 16; shift >= 0; shift--)
    {

        /**
         *
         * result = "010"
         *
         * 1- test
         * shift = 4
         * 0001
         * after shift
         *
         * 1000
         * &
         * number = 0101
         * value = 0000
         *
         * 2-test
         *
         * shift = 3
         *
         * 0100
         * &
         * number = 0101
         *
         * 0100
         *
         * shift = 2
         *
         * 0010
         * &
         * number = 0101
         *
         * 0000
         *
         * shift = 1
         * 0001
         */

        int value = (1 << shift) & number;
        if (value == 0)
        {
            result.append("0");
        }
        else
        {
            result.append("1");
        }
    }

    cout << "Result is : " << result << endl;
}