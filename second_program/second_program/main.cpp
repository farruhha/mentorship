#include <iostream>
using namespace std;

int main() {
    int numbers[10];
// 1,2,3,4,5,6,7,8,9,10
    
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> numbers[i];
    }

    
    cout << "print integers: " << endl;;
    for (int i = 0; i < 10; ++i) {
        cout << numbers[i] << " "<< endl;
    }
    cout << endl;

    return 0;
}

