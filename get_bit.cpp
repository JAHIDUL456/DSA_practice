#include<iostream>
using namespace std;
int main(){
    int n,num;
    cout<<"enter the position: ";
    cin>>num;
    cout<<"enter the position: ";
    cin>>n;

    if((num & (1<<n))==0){
        cout<<"0";
    }

    else{
        cout<<"1";
    }
}