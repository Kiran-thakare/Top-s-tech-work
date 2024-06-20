//  Write a program to swap the two numbers using friend function
// without using third variable
#include<iostream>
using namespace std;
class Swapp{
private:
int num1,num2;
public:
Swapp(int num1,int num2){
    this->num1=num1;
    this->num2=num2;
}
friend int swapping (Swapp &sw);
};
int swapping (Swapp &sw){

    sw.num1=sw.num1+sw.num2;
    sw.num2=sw.num1-sw.num2;
    sw.num1=sw.num1-sw.num2;
    cout<<"values After swapping:"<<sw.num1<<"\t"<<sw.num2<<endl;
}
int main (){
    int num1,num2;
    cout<<"enter the value of num1:";
    cin>>num1;
     cout<<"enter the value of num2:";
    cin>>num2;
    cout<<"values Before swapping:"<<num1<<"\t"<<num2<<endl;
    Swapp sw(num1,num2);
    swapping(sw);

}
