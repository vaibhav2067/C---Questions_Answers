//problem statement 3:

// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     if(a>0){
//         cout<<"a is positive";
//     }
//     else{
//         if(a<0){
//             cout<<"a is negative";
//         }
//         else{
//             cout<<"a is zero";
//         }
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a : ";
    cin>>a;
    if(a>0){
        cout<<"a is positive";
    }
    else if(a<0){
        cout<<"a is negative";
    }
    else{
        cout<<"a is zero";
    }
    return 0;
}