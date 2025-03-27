#include<iostream>
using namespace std;
int main(){
	
	int arr[4],sum=0,final;
	int avg;
	cout<<"enter the ct numbers: ";
	
	for(int i=0;i<4;i++){
		cin>>arr[i];
		sum=sum+arr[i];
		
	}
	int min=arr[0];
	for(int i=1;i<4;i++){
		if(min>arr[i]){
			min=arr[i];
		}	
		
	}
	final=sum-min;
	avg=(final)/3;
	cout<<avg;
	
}
