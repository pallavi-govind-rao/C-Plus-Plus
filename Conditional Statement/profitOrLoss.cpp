#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter the cost price : ";
    cin>>cp;
    int sp;
    cout<<"Enter the selling price : ";
    cin>>sp;
    if(cp==sp){
        cout<<"Neither profit nor loss";
    }
    else if(cp>sp){
        cout<<"loss = "<<cp-sp;
    }
    else{
        cout<<"Profit = "<<sp-cp;
    }
}
