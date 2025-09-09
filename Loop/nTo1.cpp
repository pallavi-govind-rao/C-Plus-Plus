#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Decending series from "<<n<<" to 1 is :- "<<endl;
    for(int i=n;i>0;i--){
        cout<<i<<" ";
    }
}