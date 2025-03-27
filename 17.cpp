#include<iostream>
using namespace std;

int main(){
    int arr[5]={15,47,3,9,2};

    int max=arr[0];
int len=sizeof(arr)/sizeof(int);
    for(int i=0;i<len;i++){
        if(max<arr[i]){
            max=arr[i];
        }

    }

    cout<<max;
}