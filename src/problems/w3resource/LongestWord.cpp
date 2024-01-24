////Write a C++ program to find the largest word in a given string.

#include <iostream>
#include <string>
using namespace std;
string findLargestWord(string &text)
{
    string resultWord, tempString;

    for (int i = 0; i < text.length(); i++)
    {
        if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z') || (text[i] >= '0' && text[i] <= '9'))
        {
            tempString.push_back(text[i]);
        }
        else
        {
            if (tempString.length() > resultWord.length())
            {
                resultWord = tempString;
            }
            tempString.clear();
        }

        if (i + 1 == text.length() && tempString.length() > resultWord.length())
        {
            resultWord = tempString;
        }
    }
    return resultWord;
}

int main()
{
    cout << "Enter the string: ";
    string inputString;
    getline(cin, inputString);
    cout << "The largest word in the given string is: " << findLargestWord(inputString) << endl;
    return 0;
}