#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"enter the size of the array: ";
	cin>>n;
	int arr1[n],arr2[n];
	
	//input values of the array
	cout<<"enter the values of array1";
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	
	cout<<"enter the values of array2";
	for(int i=0;i<n;i++){
		cin>>arr2[i];
	}
	
	int sum[n];
	
	for(int i=0;i<n;i++){
		sum[i]=arr1[i]+arr2[i];
	}
	
	//result showing 
	cout<<"result=";
	for(int i=0;i<n;i++){
		cout<<sum[i]<<endl;
	}
	
}
