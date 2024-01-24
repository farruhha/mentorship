#include <iostream>
#include <string>
using namespace std;


string reverseString(string word) {
    int length = word.length();
    for (int i = 0; i < length / 2; ++i) {
        char temp = word[i];   // B o b u r
        word[i] = word[length - i-1 ];
        word[length - i -1 ] = temp;
    }
    return word;
} 

int main() {
    string inputString;
    cout << "Enter a string: ";
    cin>> inputString;


   
   string Reverse =reverseString(inputString);

    
   cout << "Reversed String is: "<< Reverse << endl;

    return 0;
}
