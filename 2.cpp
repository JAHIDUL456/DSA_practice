#include<iostream>
using namespace std;
int main(){
	
	char a ;
	cout<<"enter a character: ";
	cin>>a;
	
	switch(a){
		case 'a':
			cout<<"hi";
			break;

		case 'b':
			cout<<"hello";
			break;
		default:
			cout<<"invalid";
	}
}
