#include<iostream>
#include<cctype>
#include<string>

using namespace std;

int main(){
	string name;
	cout<<"enter your name sir: ";
	getline(cin,name);
	int pass;
	if(name=="jahid"){
		cout<<"enter the numerical password : ";
		cin>>pass;
		
		
			for(int i=1;i<=3;i++){
				cout<<"enter the numerical password : ";
				cin>>pass;
				if(pass==1904015){
					cout<<"welcome sir";
					continue;
				}
				
			}
			
		}
	}
	

