#include<iostream>
using namespace std;
int main(){
    // int sub1;
    // cout<<"Enter marks of sub1 :- ";
    // cin>>sub1;
    // int sub2;
    // cout<<"Enter marks of sub2 :- ";
    // cin>>sub2;
    //  int sub3;
    // cout<<"Enter marks of sub3 :- ";
    // cin>>sub3;
    //  int sub4;
    // cout<<"Enter marks of sub4 :- ";
    // cin>>sub4;
    //  int sub5;
    // cout<<"Enter marks of sub5 :- ";
    // cin>>sub5;
    int sub1,sub2,sub3,sub4,sub5;
    cout<<"Enter all subject marks :- ";
    cin>>sub1>>sub2>>sub3>>sub4>>sub5;
    int p=(sub1+sub2+sub3+sub4+sub5)/5;
    cout<<"The percentage is "<<p;
}