#include <iostream>
using namespace std;

int main() {
    const int size1 = 2;
    const int size2 = 3;
    int arr[size1][size2] = {
        {1, 2, 3},
        {3, 4, 5}
    };

    cout << "Print the array's integers:" << endl;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
