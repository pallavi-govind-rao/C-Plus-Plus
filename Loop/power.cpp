#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter base :- ";
    cin>>a;
    int b;
    cout<<"Enter exponent :- ";
    cin>>b;
    bool flag=true; //true means power positive
    if(b<0){
        flag=false; // false means power negative
        b=-b;
    }
    float power=1;
    for(int i=1;i<=b;i++){
        power*=a;
    }
    if(flag==false){
        power=1/power;
        b=-b;
    }
    if(a==0 && b==0) cout<<"Not defined";
    else cout<<a<<" raise to power "<<b<<" is "<<power;
}