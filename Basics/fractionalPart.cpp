#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter a float value :- ";
    cin>>x;
    float p=x;
    int y=(int)x;
    float z=(float)y;
    x=x-z;
    cout<<"The fractional value of "<<p<<" is "<<x;
}