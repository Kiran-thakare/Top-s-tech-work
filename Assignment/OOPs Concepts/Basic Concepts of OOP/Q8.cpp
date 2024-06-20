// Write a C++ program to create a class called Person that has private
// member variables for name, age and country. Implement member
// functions to set and get the values of these variables.
#include<iostream>
using namespace std;
class person{
    private:
    string name;
    int age;
    string country;
    public:
    person(string n,int a,string con){
        name=n;
        age=a;
        country=con;
    }
    int setname(string na){
        name=na;
    }
    int setage(int ag){
        age=ag;
    }
    int setcountry(string coun){
        country=coun;
    }
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    string getcountry(){
        return country;
    }
};
int main(){
    person p1("Kiran",23,"India");
    
    cout<<"Name:"<<p1.getname()<<endl;
     cout<<"Age:"<<p1.getage()<<endl;
      cout<<"Country:"<<p1.getcountry()<<endl;

     p1.setname("Sau");
     p1.setage(22);
     p1.setcountry("India");

     cout<<"Update It Name And Details:"<<endl;
      cout<<"Name:"<<p1.getname()<<endl;
     cout<<"Age:"<<p1.getage()<<endl;
      cout<<"Country:"<<p1.getcountry()<<endl;
}
