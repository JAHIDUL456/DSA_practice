#include<iostream>
using namespace std;

int main(){
    int i,j;
int arr[]={1,2,3,4,5};
    for(i=0;i<5;i++){
        for(j=i;j<5;j++){
            for(int k=i;k<=j;k++){
cout<<arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}