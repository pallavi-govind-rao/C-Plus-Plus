#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n%5==0 || n%3==0){
        cout<<"The number is divisible by 5 or 3";
    }
    else{
        cout<<"The number is NOT divisible by 5 or 3";
    }
}