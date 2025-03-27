#include<iostream>
#include<string>
using namespace std;
int main(){
//oops class

class Student{
    public:
    string name;
    int roll;
private:
    void sum(){
        cout<<"i love you"<<endl;
    }
};

Student s1;

s1.name="jahid";

cout<<s1.name<<endl;

}