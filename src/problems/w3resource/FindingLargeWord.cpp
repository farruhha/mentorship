//Write a C++ program to find the largest word in a given string.

#include <iostream>
using namespace std;

string findLargeWord(string& text)
{
    for (int index = 0; index < text.size(); index++)
    {
        int code_position = toupper(text[index]);

        if (index == 0) {

            if(code_position>=97 && code_position<=122){

                text[index]=toupper(text[index]);
            }
            else if(code_position==32){
                text[index+1]=text[index+1]-32;
            }
        }
    }
    return text;
}

int main()
{
string inputText;
cout<<"Enter the input string:"<<endl;
cin>>inputText;

findLargeWord(inputText);

cout << "After the converting:"<< inputText <<endl;


return 0;

}