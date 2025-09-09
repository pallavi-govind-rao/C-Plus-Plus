#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number :- ";
    cin>>a;
    // for(int i=2;i<=a-1;i++){
    //     if(a%i==0){
    //         cout<<"Composite number"<<endl;
    //         break;
    //     }
    //     else{
    //         cout<<"Not a composite number";
    //         break;
    //     }
    // }
    bool flag = true;
    for(int i=2;i<=a-1;i++){
        if(a%i==0){
            flag=false;
            break;
        }
    }
    if(a==1) cout<<"1 is neither prime nor composite";
    else if(flag==true) cout<<a<<" is prime";
    else cout<<a<<" is composite";

}