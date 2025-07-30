#include<iostream>
using namespace std;

int main(){
    int arr[5],n,c=0;
    cout<<"Enter the aaray elements";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Enter the no. to search";
    cin>>n;
    for(int i=0;i<5;i++){
        if(arr[i]==n){         
            cout<<"Element found at "<<(i+1);

            break;
        }  
    }
        if(c==0){
            cout<<"Not found";
        }
    return 0;
}