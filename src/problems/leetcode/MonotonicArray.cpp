#include <iostream>
using namespace std;

/***
 * Your problem statement.
 * 
*/

int main()
{
    cout << "ENTER NUMBER OF INTEGER:" << endl;

    int size;
    cin >> size;

    cout << "ENTER integers:" << endl;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    bool condition = true;

    for (int i = 0; i < (size - 1); i++)
    { // 0,1,1,2,3,4
        if (arr[i] == arr[i + 1])
        {
            continue;
        }
        else if (arr[i] > arr[i + 1])
        {
            condition = false;
            break;
        }
        else
        {
            condition = true;
            break;
        }
    }
    bool isMonotonic = true;

    if (condition == true)
    {
        for (int i = 0; i < (size - 1); i++)
        {
            if (arr[i] <= arr[i + 1])
            {
                isMonotonic = true;
            }
            else
            {
                isMonotonic = false;
            }
        }
    }
    else
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] >= arr[i + 1])
            {
                isMonotonic = true;
            }
            else
            {
                isMonotonic = false;
            }
        }
    }
    if (isMonotonic)
    {
        cout << "PRINT:"
             << "monotonic" << endl;
    }
    else
    {
        cout << "unmonotonic";
    }

    return 0;
}

bool isMonotonic(vector<int> &nums)
{
    bool increasing = false;
    bool decreasing = false;

    for (int index = 1; index < nums.size(); ++index)
    {
        if (nums[index] < nums[index - 1])
        {
            increasing = true;
        }
        else if (nums[index] > nums[index - 1])
        {
            decreasing = true;
        }

        if (increasing && decreasing)
        {
            return false;
        }
    }

    return true;
}
