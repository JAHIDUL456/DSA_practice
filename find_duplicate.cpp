#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec={1,2,2,4};

    int count=1;
    for(int i=0; i<vec.size();i++){
        count++;
        for(int j=i+1;j<vec.size();j++){
            
            if(vec[i]==vec[j]){
                cout<<vec[i]<<" "<<count;
            }
            
        }
         
    }
}