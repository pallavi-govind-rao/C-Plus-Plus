#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n>99 && n<1000){
        cout<<"The number contain 3 digit !";
    }
    else{
        cout<<"The number does not contain 3 digit !";
    }
}