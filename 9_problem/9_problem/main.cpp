#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "ENTER THE NUMBER OF ARRAY:" << endl;
    cin >> size;
    int arr[size];//123321
    
    cout << "ENTER  ARRAY:" << endl;
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    bool a;
  
    for(int i=0;i<size/2;i++){
        if(arr[i]==arr[size-1-i]){
           a=true;
        }else{
            a=false;
            break;
        }
    }
    
    cout << a <<endl;
    
 return 0;
}
