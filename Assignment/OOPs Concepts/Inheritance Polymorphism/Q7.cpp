//  Write a C++ Program to illustrates the use of Constructors in multilevel
// inheritance
#include<iostream>
using namespace std;
class Person{
public:
    int pid;
    string name;
    public:
    int getdata(){
        cout<<"Enter Id:";
        cin>>pid;
        cout<<"Enter Person Name:";
        cin>>name;
    }
    int show(){
        cout<<"Person id:"<<pid<<endl<<"Person Name:"<<name<<endl;

    }
};
class task:public Person{
    public:
    int task1,task2;
    public:
    int addtask(){
        getdata();
        show();
        cout<<"Enter Task:";
        cin>>task1>>task2;

    }
};
class Approvel:public task{
    public:
    int res;
    public:
    int show_res(){
        addtask();
        res=task1+task2;

    }
    int display(){
        cout<<"Result of Person:"<<res<<endl;
    }
};
int main(){
    Approvel ap;
    ap.show_res();
    ap.display();
}
