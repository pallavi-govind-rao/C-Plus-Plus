#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    if(a%5==0){
        if(a%3==0){
        cout<<"The number is divisible by 5 and 3 both";
        }
        else{
            cout<<"The number is dividible by 5 but not by 3";
        }
    }
    else{
        if(a%3==0){
        cout<<"The number is divisible not by 5 but divisible by 3";
        }
        else{
            cout<<"The number is not divisible by 5 and 3 both";
        }
    }
}