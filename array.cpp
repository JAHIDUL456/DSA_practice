#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"how many numbers you want to enter: ";
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		cout<<"arr["<<i<<"]"<<"="<<arr[i]<<endl;
	}
}
