#include<iostream>

using namespace std;

int main(){
	
	int a;
	cout<<"enter a number: ";
	cin>>a;
	
	if(a>0){
		cout<<a<<" is a positive number";
	}
		
	else if(a==0){
		cout<<a<<" is a zero";
		
	}
	else if(a<0){
		cout<<a<<" is a negative number";
		
	}
	
	else{
		cout<<a<<" is not a number";
	}
	
	
		
}
