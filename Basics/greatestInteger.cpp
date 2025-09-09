#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter a float value :- ";
    cin>>x;
    int y=(int)x;  //typecasting
    cout<<"The greatest integer of "<<x<<" is "<<y;
}