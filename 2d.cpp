#include<iostream>
using namespace std;
int main(){
	int n,a;
	cout<<"enter the order of the matrix: ";
	cin>>n>>a;
	cout<<"your matrix is :"<<n<<"x"<<a<<endl;
	
	int arr1[n][a];
	cout<<"enter the values of the matrix: ";
	for(int i=0;i<n;i++){
		for(int j=0;j<a;j++){
			cin>>arr1[i][j];
		}
 }
	
	for(int i=0;i<n;i++){
		for(int j=0;j<a;j++){
			cout<<"arr1["<<i<<"]"<<"["<<j<<"]"<<"="<<arr1[i][j]<<endl;
		}
	}
		
		

	
}
