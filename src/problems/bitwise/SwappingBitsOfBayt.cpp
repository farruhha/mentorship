#include <iostream>
#include <bitset>
using namespace std;
void swapBits(unsigned char &byte, int i, int j)
{
    //Swapping of two bits of a byte using C++ program: Here, we will learn how to swap two bits of a byte?
    
    // Extract the values of the i-th and j-th bits
    // 00001111
    // postion i=2 j=6
    int bit_i = (byte >> i) & 1;
    // 00001111 >> 2 ==> 00000011 & 00000001
    int bit_j = (byte >> j) & 1;

    // If the bits are different, swap them using XOR
    if (bit_i != bit_j)
    {
        byte ^= (1 << i) | (1 << j);
        //  001 << 2 = 00000100
        //  001 << 6 == 00100000
        //  00000100 | 01000000 = 01000100
        //  00001111 ^ 01000100 =  01001011
    }
}

int main()
{
    // Since unsigned char has maximum value of 255
    // we will only accept numbers starting from 0
    cout << "Enter the number" << endl;
    int number;
    cin >> number;
    cout << "Enter the position one" << endl;
    int pos1;
    cin >> pos1;
    cout << "Enter the position two" << endl;
    int pos2;
    cin >> pos2;

    if (number >= 0 || number <= 255)
    {
        // Converting int value to unsigned char
        unsigned char byte = (unsigned char)number;
        // To display the input in bits
        cout << "Original Byte: " << bitset<8>(byte) << endl;
        swapBits(byte, pos1, pos2);
        cout << "Byte after swapping bits: " << bitset<8>(byte) << endl;

        return 0;
    }

    // 00001100  pos1=3  pos2=5 ==> 00100100
    return 0;
}