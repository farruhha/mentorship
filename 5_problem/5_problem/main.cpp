#include <iostream>
using namespace std;
int main() {
    int numbers[10];
    int arr[10];
// 1,2,3,4,5,6,7,8,9,10
    
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> numbers[i];
    }
    
     for (int i = 0; i < 10; ++i) {
        arr[i]=numbers[9-i];
     }
    
    cout << "print integers in reverse order: " << endl;;
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " "<< endl;
    }
    cout << endl;

    return 0;
}

