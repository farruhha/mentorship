#include <iostream>
using namespace std;
int main() {
    cout<< "ENTER NUMBER OF INTEGER:" << endl;
    int size;
    cin>>size;
    cout<< "ENTER integers:" << endl;
    int  arr[size];
    
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    bool cond=true;
 
    for(int i=0;i<(size-1);i++){//0,1,1,2,3,4
        if(arr[i]==arr[i+1]){
            continue;
        }else if(arr[i]>arr[i+1]){
            cond=false;
            break;
        }else{
            cond=true;
            break;
        }
    }
    bool monotonic=true;
    if(cond=true){
        for(int i=0;i<(size-1);i++){
            if(arr[i]<=arr[i+1]){
                monotonic=true;
            }else{monotonic=false;}
        }
        
    }else{
        for(int i=0;i<size-1;i++){
            if(arr[i]>=arr[i+1]){
                monotonic=true;
            }else{monotonic=false;}
        }
    }
    if(monotonic){
        cout<<p"PRINT:" << "monotonic" << endl;
    }else{cout<<"unmonotonic";
        
    }

    
    
    
    return 0;
}
