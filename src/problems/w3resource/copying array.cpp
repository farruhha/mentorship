#include <iostream>
using namespace std;

int main()
{
    int numbers[10];
    int anotherNumber;
    // 1,2,3,4,5,6,7,8,9,10

    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }
    cout << "Enter another number:" << endl;
    cin >> anotherNumber;

    for (int i = 0; i < 10; i++)
    {
        if (anotherNumber == numbers[i])
        {
            cout << "true" << endl;
            break;
        }
        else
        {
            cout << "false" << endl;
            break;
        }
    }

    return 0;
}
