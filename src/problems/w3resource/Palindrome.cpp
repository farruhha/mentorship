#include <iostream>
using namespace std;

/**
 * Write a program to check if elements of an array are same or not it read from front or back. E.g.-
    2	3	15	15	3	2
*/

int main()
{
    int size;
    cout << "ENTER THE NUMBER OF ARRAY:" << endl;
    cin >> size;
    int arr[size]; // 123321

    cout << "ENTER  ARRAY:" << endl;
    for (int index = 0; index < size; index++)
    {
        cin >> arr[index];
    }
    bool isPalindrome = false;

    for (int index = 0; index < size / 2; index++)
    {
        if (arr[index] == arr[size - 1 - index])
        {
            isPalindrome = true;
        }
        else
        {
            isPalindrome = false;
            break;
        }
    }

    return 0;
}
