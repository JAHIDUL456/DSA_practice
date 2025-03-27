#include<iostream>
using namespace std;
int main(){
	
	int ct[4];
	int sum=0,avg;
	cout<<"enter the ct numbers: ";
	for(int i=0;i<4;i++){
		cin>>ct[i];
	}
	
	int max=ct[0];
	
	for(int i=1;i<4;i++){
		if(ct[i]>max){
			max=ct[i];
			sum=sum+max;
		}
		else{
			sum=sum+max;
		}
		
	
		
	}
	
	cout<<sum;
}
