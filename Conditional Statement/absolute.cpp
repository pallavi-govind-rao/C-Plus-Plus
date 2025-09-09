#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an integer :- ";
    cin>>n;
    // if(n==0){
    //     cout<<"the absolute value is "<<0;
    // }
    // else if(n>0){
    //     cout<<"the absolute value is "<<n;
    // }
    // else{
    //     cout<<"the absolute value is "<<-n;
    // }
    if(n<0){
        cout<<"absolute value is "<<-n;
    }
    else{
        cout<<"absolute value is "<<n;
    }
}