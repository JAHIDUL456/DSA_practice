#include<iostream>
using namespace std;
int main(){

    int arr1[]={10,20,30,40};

    
int len=sizeof(arr1)/sizeof(int);
int arr2[len];
int j=0;
for(int i=len-1;i>=0;i--){
    arr2[j++]=arr1[i];
}

for(int i=0;i<len;i++){
    cout<<arr2[i]<<" ";
}

}