//life e first time OOP

#include<iostream>
#include<string>
using namespace std;

//defining the class here

class Cars{
	private:
		string car_name;
		string company_name;
		double price;
		
	
	public:
		void setdata(string c_name, string com_name,double p){
			c_name=car_name;
			com_name=company_name;
			p=price;
		}
		
		void inputData(){
			cout<<"enter car name: "<<endl;
			cin>>car_name;
			cout<<"enter company name: "<<endl;
			cin>>company_name;
			cout<<"enter price: ";
			cin>>price;
		}
		
		void display(){
			cout<<"company_name: "<<company_name<<endl;
			cout<<"car_name: "<<car_name<<endl;
			cout<<"price: "<<price<<endl;
		}
};


int main(){
	Cars car1;
	car1.inputData();
	car1.display();
	
}
