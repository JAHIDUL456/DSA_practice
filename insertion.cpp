//insertion shorting 

#include<iostream>
using namespace std;

int main(){
int i,j;
    int arr[]={5,4,1,3,2};

    int n=sizeof(arr)/sizeof(int);

    for(i=0;i<n;i++){
        int min=i;

        for(j=i;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }

        swap(arr[i],arr[min]);
    }


    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}