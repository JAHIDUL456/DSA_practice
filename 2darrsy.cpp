#include<iostream>
using namespace std;
int main(){

    int row,col;

    cout<<"enter the ROW X COL";
    cin>>row>>col;

    int arr[row][col];
cout<<"enter data"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];

        }
    }


    cout<<"you entered: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }

}