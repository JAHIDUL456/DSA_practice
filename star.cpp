#include<iostream>

using namespace std;

int main(){

    for(int i=1;i<=4;i++){
        for(int j=i;j<=5-i;j++){
            cout<<char(64+j);
        }
        cout<<endl;
    }
}