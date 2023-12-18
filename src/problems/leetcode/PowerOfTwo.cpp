// Write a program in c++ if given number is the power of two

#include <iostream>
using namespace std;
bool isPowerOfTwo(int number) {
  if (number < 2)
  {
    return false;
  }
  // 32 => 100000
  // 31 => 011111
  return (number & (number - 1)) == 0;
}

int main()
{
  cout << " Enter a number and this program will tell you whether the number is the power of two\n";
  int number;
  cin >> number;
  cout << isPowerOfTwo(number) << "\n";
}

