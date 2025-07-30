// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
    // for(int i=1;i<=n;i++){
    //     for (int j=1;j<=i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;

    // }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n=5;
//     for(int i=n;i>=1;i--){
//         for (int j=1;j<=i;j++){
//             cout<<'$';
//         }
//         cout<<endl;

//     }
// }
    for(int i =1;i<=n;i++){
        for(int j=i;j<n;j++)
           cout<<" ";
        for(int k=1;k<=i*2-1;k++){
           cout<<"*";
        }
        cout<<endl;
    }
    // return 0;      
    for(int i =5;i>=1;i--){
        for(int j=i;j<n;j++)
           cout<<" ";
        for(int k=1;k<=i*2-1;k++){
           cout<<"*";
        }
        cout<<endl;
    }
}
    // return 0; 
//     int i;
//     cout<<"enter i";
//     cin>>i;      
//     (i%2==0)? cout<<"even" : cout<<"odd";
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char x = 'D';
//     int y = x+1;
//     cout<<"x ="<<x<<endl;
//     cout<<"y="<<y<<endl;
//     return 0;
// }
