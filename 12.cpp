#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int j,a,n,rem=0;
    

    cout<<"enter the number: ";
    cin>>n;
j=n;
    while(n!=0){
        a=n%10;
        rem=rem+pow(a,3);
        n=n/10;

    }

    if(rem==j){
        cout<<"it's an armstrong number";
    }
    else{
        cout<<"not an armstrong number";
    }
    
}