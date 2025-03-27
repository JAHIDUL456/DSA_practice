#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
int n=45;
int row=0,col=3;
for(int i=0;i<10;i++){
    if(arr[row][col]==n){
        cout<<row<<" "<<col;
        return 0;
    }

    else if(arr[row][col]<n){
        row++;
    }

    else if(arr[row][col]>n){
        col--;
    }}



}