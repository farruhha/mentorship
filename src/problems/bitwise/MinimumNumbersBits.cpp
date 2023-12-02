#include <iostream>
using namespace std;

/***
 * Given an integer number and we have to find the total number of minimum bit(s) which can be used to store given integer number.
 */

int main()
{
    cout << "ENTER NUMBER OF INTEGER:" << endl;
    int number;
    cin >> number;

    /***
     * number = 6 => binary (110)
     * shift = 0000001
     * numbb = 0000110
     *
     * value = 0;
     *
     * shift = 0000010
     * numbb = 0000110
     * 
     * 00
     * index = 1, index <=2
     * 
     * 
     */

    int shift = 1;
    int minBits = 1;
    for (int time = 1; time <= 32; time++)
    {
        int value = number & shift;
        shift = shift << 1;

        if (value == 0)
        {
            continue;
        }

        minBits = time;
    }

    cout << "Minimum Bits: " << minBits << endl;
}