#include<iostream>
#include<cstring>
using namespace std;
int main(){

    char word[10]="racecar";
char word2[20];
    for(int i=0;i<7;i++){
        word2[6-i]=word[i];
        
    }
    word2[7] = '\0';

    if(strcmp(word,word2)==0){
        cout<<"palindrom";
    }

    else{
        cout<<"not";
    }

}