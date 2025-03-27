//multiplication of table of 5

#include<iostream>
using namespace std;
int main(){
	int a ,n,res;
	
	cout<<"koto ghor er namta ? ";
	cin>>a;
	cout<<"koto porjonto? ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		res=a*i;
		cout<<a<<"x"<<i<<"="<<res<<"\n";
	}
}
