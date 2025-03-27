#include<iostream>
using namespace std;
int main(){

    int arr[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};

    int n=2;
int sum=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==j){
                sum+=arr[i][j];

            }
            else if(j==n-i){
                sum+=arr[i][j];
            }
        }
    }
    if(n % 2 == 1){
        sum -= arr[n/2][n/2];
    }
    cout<<sum;
}