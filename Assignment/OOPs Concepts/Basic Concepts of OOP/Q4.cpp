// 1. WAP to create simple calculator using class
#include<iostream>
using namespace std;
class simple{
    public:
    int num1,num2;
    public:
     int get(){
        cout<<"Enter Number:";
        cin>>num1;
        cout<<"Enter Number:";
        cin>>num2;
     }
     int display(){
        cout<<"Addition Of Two Number:"<<num1+num2<<endl;
        cout<<"Substraction Of Two Number:"<<num1-num2<<endl;
        cout<<"Multiplication Of Two Number:"<<num1*num2<<endl;
        cout<<"Divide Of Two Number:"<<num1/num2<<endl;
     }
};
int main(){
    simple sp;
    sp.get();
    sp.display();
}
