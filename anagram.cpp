#include<iostream>
#include<string>
using namespace std;

bool isit(string str1, string str2){
    int count[26]={0};

    //first string er opor loop chalai
    if(str1.length()==str2.length()){
        for(int i=0;i<str1.length();i++){
            count[str1[i]-'a']++;
        }

        for(int i=0;i<str2.length();i++){
            
            if(count[str2[i]-'a']==0){
                cout<<"invalid";
                return false;
            }

            count[str2[i]-'a']--;

        }
        cout<<"valid";
        return true;

        

    }
    


}

int main(){
string str1="apagram";
string str2="nagaram";

isit(str1,str2);
return 0;
}