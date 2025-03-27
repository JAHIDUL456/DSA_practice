#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a bumber: ";
    cin>>num;

    if((num & 1)==0){
        cout<<"its a even";
    }

    else{
        cout<<"its odd";
    }
}