#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=2;i<=n-1;i++){
        if(n==1) cout<<"1 is neither composite nor prime";
        else if(i%n==0){
            cout<<"composite";
            break;
        }
        else cout<<"prime";
        break;
    }
}