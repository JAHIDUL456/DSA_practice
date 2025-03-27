#include<iostream>
#include<string>
using namespace std;
int main(){

    class Student{

        string name;
        float cgpa;

        public:

        void setname(string name1){
            name=name1;
        }

        void setcgpa(float cgpa1){

            cgpa=cgpa1;
        }

        string getname(){
            return name;
        }

        float getcgpa(){
            return cgpa;
        }
    };


    Student s1;

    s1.setname("jahid");
    s1.setcgpa(3.55);

    cout<<s1.getname()<<endl;
    cout<<s1.getcgpa();
}