#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    if(((int)ch>=65 && (int)ch<=90) || ((int)ch>=97 && (int)ch<=122)){
        cout<<"The character is alphabet !";
    }
    else{
        cout<<"The character is NOT alphabet !";
    }
}