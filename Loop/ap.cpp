#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n term :- ";
    cin>>n;
    //1 3 5 7 9 ...
    //tn=a+(n-1)d
    //tn=1+(n-1)2
    //tn=1+2n-2
    //tn=2n-1
    // for(int i=1;i<=2*n-1;i+=2){
    //     cout<<i<<" ";
    // }
    // 4 7 10 13 17...
    int a=4;
    for(int i;i<=n;i++){
        cout<<a<<" ";
        a+=3;
    }
}