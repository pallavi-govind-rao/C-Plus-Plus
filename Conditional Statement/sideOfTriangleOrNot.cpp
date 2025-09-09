#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter all 3 sides of triangle :- ";
    cin>>a>>b>>c;
    if(b+c>a && c+a>b && a+b>c){
        cout<<a<<","<<b<<","<<c<<" can be the side of a triangle";
    }
    else{
        cout<<a<<","<<b<<","<<c<<" can not be the side of a triangle";    
    }
}