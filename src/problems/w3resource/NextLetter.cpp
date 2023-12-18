// Write a C++ program to change every letter in a given string with the letter following it in the alphabet (i.e. a becomes b, p becomes q, z becomes a).
//Example:
//Sample Input: w3resource
//Sample Output: x3sftpvsdf

#include <iostream>
using namespace std;

string findLetter(string& text)
{
    int code_position;
    for (int index = 0; index < text.size(); index++)
    {
        int code_position = int(text[index]);

        if(code_position==122){
            text[index]=char(97);
        }
        else if(code_position==90){
            text[index]=char(65);
        
        }
        else if(code_position>=65 && code_position<=95 || code_position>=97 && code_position<=122){

          text[index]=char(text[index+1]);

        }
        
    }
    return text;
}

int main()
{
string inputText;
cout<<"Enter the input string:"<<endl;
cin>>inputText;

findLetter(inputText);

cout << "After the converting:"<< inputText <<endl;


return 0;

}