// . Write a program to find the max number from given two numbers
// using friend function
#include<iostream>
using namespace std;
class Maxx{
    private:
    int num1,num2;
    public:
    Maxx(int num1,int num2){
        this->num1=num1;
        this->num2=num2;
    }
    friend int max(Maxx &m);
};
int max(Maxx &m){
    cout<<"The Value Of Num1 and Num2 is:"<<m.num1<<"\t"<<m.num2<<endl;
    if(m.num1>m.num2){
        cout<<"num 1 is Maximum";
    }
    else{
        cout<<"Num 2 is Maximum";
    }
}
int main(){
    int num1,num2;
    cout<<"enter the value of num1:";
    cin>>num1;
     cout<<"enter the value of num2:";
    cin>>num2;
    Maxx m(num1,num2);
    max(m);
}
