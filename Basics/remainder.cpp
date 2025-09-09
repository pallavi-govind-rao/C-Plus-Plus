#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the dividend :- ";
    cin>>a;
    int b;
    cout<<"enter the divisor :- ";
    cin>>b;
    int q=a/b;
    //a=bq-r;
    //r=a-bq;
    int r=a-(b*q);
    cout<<"The remainder is :- ";
    cout<<r;
    return 0;
}