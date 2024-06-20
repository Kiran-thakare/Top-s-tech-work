//Write a C++ Program display Student Mark sheet using Multiple inheritance
#include<iostream>
using namespace std;
class Student{
    protected:
     string name;
     int id;
     public:
        int input(){
            cout<<"Enter Name:";
            cin>>name;
            cout<<"Enter Id:";
            cin>>id;
        }
        int Shows(){
            cout<<"Name:"<<name<<endl;
            cout<<"id:"<<id<<endl;
        }
};
class Marks{
    protected:
    int physicsMarks;
    int chemistrymarks;
    public:
    int getM(){
        cout<<"Enter Physics Marks:";
        cin>>physicsMarks;
        cout<<"Enter Chemistry Marks:";
        cin>>chemistrymarks;
    }
    int showM(){
        cout<<"Physics:"<<physicsMarks<<endl;
        cout<<"Chemistry:"<<chemistrymarks<<endl;
    }
};
class Result:public Student,public Marks{
    public:
    int result;
    public:
    int total(){
        input();
        getM();
        Shows();
        showM();
        result=chemistrymarks+physicsMarks;
        cout<<"Total Marks:"<<result<<endl;
    }
};
int main(){
    Result res;
    res.total();
}
