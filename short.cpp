#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,4,3,7,2};

    sort(arr,arr+5,greater<int>());

    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}