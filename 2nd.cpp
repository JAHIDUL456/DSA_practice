#include<iostream>
using namespace std;
int main(){
    int num[3][3]={{1,4,9},{11,4,3},{2,2,3}};
int sum=0;
    for(int i=0;i<3;i++){
sum+=num[1][i];
    }cout<<sum;
}