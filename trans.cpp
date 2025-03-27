#include<iostream>
using namespace std;
int main(){

    int arr[2][3]={{11,12,13},{21,22,23}};
    int arr2[3][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            arr2[j][i]=arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}