#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :- ";
    cin>>n;
    int p=n;
    int a=0;
    while(n>0){
        n=n/10;
        a++;
    }
    if(p==0) cout<<"The number of digit in 0 is 1";
    else cout<<"The number of digit in "<<p<<" is "<<a;
}