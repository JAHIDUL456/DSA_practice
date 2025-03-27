#include<iostream>
#include<string>
using namespace std;

struct person{
	string name;
	int age;
	
};

int main(){
	int i,n;
	cout<<"how many person? ";
	cin>>n;
	
	person p[n];
	
	
	for(i=0;i<n;i++){
		cout<<"enter the person details: ";
		cin>>p[i].name;
		cin>>p[i].age;
	}
	
	for(i=0;i<n;i++){
		cout<<"person details: " ;
		cout<<p[i].name<<endl;
		cout<<p[i].age<<endl;
	}
	
	
}
