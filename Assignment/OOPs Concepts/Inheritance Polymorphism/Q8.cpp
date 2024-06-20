// Write a program to Mathematic operation like Addition, Subtraction,
// Multiplication, Division Of two number using different parameters and
// Function Overloading
#include<iostream>
using namespace std;
class Mathoperation{
    public:
int Add_fun(int a,int b){
    cout<<"Addition of numbers:"<<a+b<<endl;
    cout<<"Subtraction Of numbers:"<<a-b<<endl;
    cout<<"Multiplication Of Numbers:"<<a*b<<endl;
    cout<<"Divide by Numbers:"<<a/b<<endl;
}
double Add_fun( double a, double b){
     cout<<"Addition of numbers:"<<a+b<<endl;
    cout<<"Subtraction Of numbers:"<<a-b<<endl;
    cout<<"Multiplication Of Numbers:"<<a*b<<endl;
    cout<<"Divide by Numbers:"<<a/b<<endl;
}
};
int main(){
   Mathoperation math;
  math.Add_fun(30,20);
  math.Add_fun(30.0,20.0);

}
