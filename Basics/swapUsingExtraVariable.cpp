#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a = ";
    cin>>a;
    int b;
    cout<<"enter b = ";
    cin>>b;
    int temp=a;
    a=b;
    b=temp;
    cout<<"after swap :- ";
    cout<<"a = "<<a<<" and "<<"b = "<<b;
}