#include<iostream>
using namespace std;
void swap(int arr[],int a,int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
    
}
int main(){

    int arr[]={10,20,30,40,50};

    int len=sizeof(arr)/sizeof(int);

    int start=0,end=len-1;

    while(start<end){
        swap(arr,start,end);
        
        start++;
        end--;
    }

    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}