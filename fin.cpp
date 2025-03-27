#include<iostream>
using namespace std;
int main(){
int count=0;
    int arr[2][3]={{4,7,8},{8,8,7}};

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==7){
                count++;
            }
        }
    }cout<<count;
}