#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec={2,7,11,15};

    int st=0;
    int end=vec.size()-1;
int target=9;
    while(st<end){
        int sum=vec[st]+vec[end];
        if(sum==target){
            cout<<st<<","<<end;
            return 0;
        }
        else if(sum<target){
            st++;
        }

        else if(sum>target){
            end--;
        }

        else{
            cout<<"not possible";
        }

    }
}