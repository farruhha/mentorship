#include <iostream>
using namespace std;
int main()
{
    // Finding the largest and smallest elements of an array
    int max = 0;
    cout << "ENTER THE NUMBER OF ARRAY:" << endl;
    int size;
    cin >> size;
    int arr[size]; // 33454683
    cout << "ENTER  ARRAY:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            continue;
        }
        else if (arr[i] < arr[i + 1])
        {
            max = arr[i + 1];
        }
        else
        {
            max = arr[i];
        }
    }
    cout << "Largest element of arry:" << max << endl;

    return 0;
}
// buni ishlatib ko'rish kerak

