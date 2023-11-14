#include<iostream>

using namespace std;

int main()
{
     cout << "We started arithmetic operation!" << endl;
    char operation;
   double firstVariable;
   double secondVariable;
   double result;
    
    cout << "Please enter the first variable: " << endl;
    cin >> firstVariable;
    
    cout << "Please enter the second variable: " << endl;
    cin >> secondVariable;
    
    cout << "Please enter the operation: " << endl;
    cin >> operation;
    
   
    cout << "The first variable value: " << firstVariable << endl;
    cout << "The second variable value: " << secondVariable << endl;
    cout << "The operation: " << operation << endl;
    
    switch(operation){
        case '+':
             result=firstVariable+secondVariable;
            cout<<"Result of addition:"<<firstVariable<< "+" <<secondVariable<<"="<<result<<endl;
            break;
            
        case '-':
          result=firstVariable-secondVariable;
            cout<<"Result of subtraction:"<<firstVariable<< "-" <<secondVariable<<"="<<result<<endl;
            break;

        case '/':
            if(secondVariable !=0){
                result=firstVariable/secondVariable;
                cout<<"Result of division:"<<firstVariable<< "/" <<secondVariable<<"="<<result<<endl;
                break;
            }else{
                cout<<"you cannot divide number by zero"<<endl;
            }
            
                    break;
            
        case '*':
          result=firstVariable*secondVariable;
            cout<<"Result of multiplication:"<<firstVariable<< "*" <<secondVariable<<"="<<result<<endl;
            break;
                    break;
        default:
                    cout << "please go ahead" << endl;
            break;
    }
    return 0;
}

