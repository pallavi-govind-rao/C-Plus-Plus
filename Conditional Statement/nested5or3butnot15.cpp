#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number :- ";
    cin>>a;
    // if((a%5==0 || a%3==0) && a%15!=0){
    //     cout<<"The number is divisible by 5 or 3 but not 15";
    // }
    // else{
    //     cout<<"Not matching condition";
    // }
    if(a%5==0 || a%3==0){
        if(a%15!=0){
            cout<<"The number is divisible by 5 or 3 but not 15";
        }
        else{
            cout<<"The number is divisible by 5,3 and 15";
        }
    }
    else{
        cout<<"The number is not divisible by 5 or 3";
    }
}