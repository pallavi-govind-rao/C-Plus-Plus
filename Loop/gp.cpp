#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n term :- ";
    cin>>n;
    // 2 6 18 54.....
    int a=2;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a*3;
    }
}