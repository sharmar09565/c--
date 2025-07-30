#include<iostream>
using namespace std;
// int main(){
//   int a,b;
//   cout<<"Enter the value of a and b";
//   cin>>a>>b;
//   if(a>b)
//       cout<<"a is bigger";
//   if(b>a)
//       cout<<"b is bigger";
//   else
//       cout<<"both are equal";
//   return 0;
// }
int main(){
    int n,fact=1;
    cout<<"Enter the value of n:";
    cin>>n;
    for (int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}
