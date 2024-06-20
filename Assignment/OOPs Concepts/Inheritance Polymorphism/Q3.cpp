//  Create a class person having members name and age. Derive a class student
// having member percentage. Derive another class teacher having member
// salary. Write necessary member function to initialize, read and write data.
// Write also Main function (Multiple Inheritance)
#include<iostream>
using namespace std;
class person{
    protected:
    string name;
    int age;
    public:
     int getinput(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;

     }
      int showp(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
      }
};
class Student:public person{
    protected:
        int percentage;
    public:
    int getpercentage(){
         getinput();
        cout<<"Enter Percentage:";
        cin>>percentage;
    }

    void shows(){
          showp();
        cout<<"Percentage:"<<percentage<<endl;

    }
};
class Teacher:public Student{
    public:
        int tsalary;
        public:
        int salary(){
           getpercentage();
           shows();
           cout<<"Enter Teacher Salary :";
           cin>>tsalary;
           cout<<"Teacher Salary:"<<tsalary;

        }
};
int main(){
    Teacher tec;
    tec.salary();
}
