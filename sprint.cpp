#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={{11,12,13,14},{1,2,3,8},{8,9,4,9},{7,6,5,10}};
    int n=4,m=4;
    int str=0,endc=m-1,endr=n-1,stc=0;

    //top row;
    while (str <= endr && stc <= endc){


    for(int i=str;i<=endc;i++){
        cout<<arr[str][i]<<" ";
    }
    cout<<endl;

    //right col;

    for(int j=str+1;j<=endr;j++){
        cout<<arr[j][endc]<<" ";
    }

    //bottom row
    cout<<endl;
    for(int i=endc-1;i>=stc;i--){
        cout<<arr[endr][i]<<" ";
    }

    //left row

    cout<<endl;

    for(int j=endr-1;j>=str+1;j--){
        cout<<arr[j][stc]<<" ";
    }
cout<<endl;
    str++;
    endc--;
    stc++;
    endr--;

}
}