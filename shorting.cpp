//BUBLE shorting 

#include<iostream>
using namespace std;

int main(){
    int i,j;

    int arr[]={5,4,2,3,1};

    int size=sizeof(arr)/sizeof(int);

    for(i=0;i<size-1;i++){
       for(j=0;j<size-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
       } 
    }

    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}