#include<iostream>
#include<string>
using namespace std;
int main(){

    string str;
    cout<<"enter something: ";

    getline(cin,str);
int count=0;
    for(int i=0;i<str.length();i++){
if(str[i]>='a' && str[i]<='z'){
    if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='0'|| str[i]=='u'){
        count++;
    }
    
}
    }

    cout<<"total "<<count<<" "<<"lowrecase vowel"<<endl;
}