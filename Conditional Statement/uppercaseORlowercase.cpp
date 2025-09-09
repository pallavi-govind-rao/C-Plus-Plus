#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character :- ";
    cin>>ch;
    if((int)ch>=65 && (int)ch<=90){
        cout<<"UPPER CASE !";
    }
    else if((int)ch>=97 && (int)ch<=122){
        cout<<"LOWER CASE !";
    }
}