#include <iostream>
using namespace std;

int main() {
    
    int numbers[10];
    int positiveNum=0;
    int negativeNum=0;
    int oddNum=0;
    int evenNum=0;
    int zeroNum=0;
    
// 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20
    
    cout << "Enter 20 integers:" << endl;
    for (int i = 0; i <10; i++) {
        cin >> numbers[i];
    
     if(numbers[i]>0){
         positiveNum++;
     }else if(numbers[i]<0){
          negativeNum++;
     }else if(numbers[i]==0){
         zeroNum++;
     }
     
     if(numbers[i]%2!=0){
         oddNum++;
     }else if(numbers[i]%2==0 && numbers[i]!=0 ){
         evenNum++;
     }
  }
     cout << "Number of positive numbers: " << positiveNum << endl;
    cout << "Number of negative numbers: " << negativeNum << endl;
    cout << "Number of odd numbers: " << oddNum << endl;
    cout << "Number of even numbers: " << evenNum << endl;
    cout << "Number of zeros: " << zeroNum << endl;
    
    

    return 0;
}
