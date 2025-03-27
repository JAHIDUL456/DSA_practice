#include<iostream>
using namespace std;
int main(){
    int i,j,n;

    cout<<"enter the range of the pattern: ";
    cin>>n;

    for(i=0;i<=n;i++){
        for(j=i;j>0;j--){
            cout<<'*';
        }
        cout<<"\n";
    }
}