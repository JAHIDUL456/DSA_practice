#include<iostream>
#include<cstring>
using namespace std;


void To_upper(char word[],int n){

    for(int i=0;i<n;i++){
        if(word[i]>='a' && word[i]<='z'){
            continue;
        }

        else{
            word[i]=word[i]-'A'+'a';
            
        }
        
    }

    for(int i=0;i<n;i++){
        cout<<word[i];
    }

}
int main(){
char word[30];
cout<<"enter a word: ";
cin.getline(word,30);
int len=strlen(word);

To_upper(word,len);

}