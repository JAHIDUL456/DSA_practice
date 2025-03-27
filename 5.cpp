#include<iostream>
using namespace std;
int main(){
	int n,r,a;
	
	cout<<"enter the number: ";
	cin>>n;
	int j=n;
	while(n!=0){
		a=n%10;
		r=r*10+a;
		n=n/10;	
	}
	
	if(j==r){
		cout<<"it's a palindrom number";
	}
	else{
		cout<<"it is not a palindrom number";
	}
	
	

}
