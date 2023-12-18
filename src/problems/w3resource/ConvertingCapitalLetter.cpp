//Write a C++ program to capitalize the first letter of each word in a given string. Words must be separated by only one space.

#include <iostream>
using namespace std;

void CapitalLetter(string& text)
{
    for (int index = 0; index < text.size(); index++)
    {
        int code_position = toupper(text[index]);

        if (index == 0) {
            // cpp String Exersise

            if(code_position>=97 && code_position<=122){

                text[index]=toupper(text[index]);
            }
            else if(code_position==32){
                text[index+1]=text[index+1]-32;
            }
        }
    }
}

int main()
{
string inputText;
cout<<"Enter the input string:"<<endl;
cin>>inputText;

CapitalLetter(inputText);

cout << "After the converting:"<< inputText <<endl;


return 0;

}