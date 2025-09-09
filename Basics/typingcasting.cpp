#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character :- ";
    cin>>ch;
    int x=(int)ch;
    cout<<"The position of character "<<ch<<" is "<<x-64;
}