#include<iostream>
using namespace std;

int binary(int *arr,int a,int b,int k){
    int mid=(a+b)/2;

    if(arr[mid]==k){
        return mid;
    }
    else if(arr[mid]>key){
        b=mid-1;
    }

    else if(arr[mid]<key){
        a=mid+1;

    }
    
    else{
        return -1;
    }
}

int main(){

    int arr[]={2,4,6,8,10,12,16};

    int key,len,st,en;
    cout<<"enter the key: ";
    cin>>key;

    len=sizeof(arr)/sizeof(int);
    st=0;
    en=len-1;
    cout<<binary(arr,st,en,key)<<endl;

}
