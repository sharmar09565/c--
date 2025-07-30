// #include<iostream>
// using namespace std;

// int main(){
//     int a = 8;
//     int b = 5;
//     if (a>b){
//         cout<<"a is the biggest no."<<a<<endl;
//         }
//     else{
//         cout<<"b is the biggest no."<<b<<endl;
//     }
//     return 0;
// }

// int main(){
//     int a = 15;
//     if (a%2 == 0){
//         cout<<"the no. is even"<<endl;
//     }
//     else{
//         cout<<"the no. is odd"<<endl;
//     }
// }

// int main(){
//     char X;
//     cin>>X;
//     cout<<X;
// return 0;
// }

// int main(){
//     char x;
//     cin>>x;
//     switch (x){
//         case 'A':
//         cout<<"choice is A";
//         break;
//         case 'B':
//         cout<<"choice is B";
//         break;
//         default:
//         cout<<"choice is unknown";
//     }
//     return 0;
// }


// assignment question
//1.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin>>a;
//     if (a>0)
//       cout<<"a is a positive no.";
    
//     else if (a<0)
//         cout<<"a is a negative no.";
        
//     else 
//         cout("a is equal to 0");
    
// }

//2.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int marks;
//     cin>>marks;
//     if (marks>=80){
//         cout<<"A";
//     }
//     else if (marks<80 && marks>=60){
//         cout<<"B";
//     }
//     if (marks>=40 && marks<60){
//         cout<<"C";
//     }
//     else{
//         cout<<"D";
//     }
// }

// 3.

// #include<iostream>
// using namespace std;
// // int main(){
// //     int age;
// //     cin>>age;
// //     if (age<18){
// //         cout<<"You can not vote";
// //     }
// //     else if (age>18){
// //         cout<<"you can vote";
// //     }
// //     else {
// //         cout<<"apply for voter id card";
// //     }
// //}

// int main(){
// //     int a = 5;
// //     int b = 3;
// // //     cout<<(a&b);
// //     cout<<(a|b);
// int x;
// int grade;
// cout<<"enter the value of x :";
// cin>>x;

// switch(grade/10){
//     case 10:
//     cout<<"full marks";
//     break;
//     case 9:
//     cout<<"grade A";
//     break;
//     case 8:
//     cout<<"grade B";
//     break;
//     case 7:
//     cout<<"grade c";
//     break;
//     case 6:
//     cout<<"grade D";
//     break;
//     default:
//     cout<<"failed";
// }
// return 0;
//  }

// #include<iostream>
// using namespace std;
// int main(){int num;
//     do{
//         cout<<"enter the elements";
//         cin>>num;
//         if (num!=0){
//              if (num%2==0){
//             cout<<"even no."<<endl;
//             }
//             else{
//             cout<<"odd no."<<endl;
//             }
//         }
       
//     }
//         while (num !=0);

//     cout<<"end";
// }

 #include<iostream>
using namespace std;
int main(){
    int N,num;
    cout<<"enter the value of N";
    for (num=1;num<=N;num++){
        cin>>num; 
    }
    if (num%2==0)
        cout<<"odd no."<<endl;
    else 
    cout<<"even no.";
}
