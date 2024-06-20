// Write a program of Addition, Subtraction, Division, Multiplication using
// constructor.
#include<iostream>
using namespace std;
    class Calculator{
        public:
        int num1,num2;
        public:
        Calculator(int n1,int n2){
            num1=n1;
            num2=n2;
        }

        int Addition(int num1,int num2){
            return num1+num2;
        }
        int Sub(int num1,int num2){
            return num1-num2;
        }
        int div(int num1,int num2){
            return num1/num2;

        }
        int multi(int num1,int num2){
            return num1*num2;
        }
    };
int main(){

     char choice;
    int a,b;
    cout<<"Enter Your Choice(+,-,*,/):";
    cin>>choice;
    cout<<"Enter Number :";
     cin>>a>>b;
      Calculator Ca(a,b);

    switch(choice){
        case '+':
        cout<<"The Addition Of :"<<Ca.Addition(a,b)<<endl;
        break;
        case '-':
        cout<<"The sub Of :"<<Ca.Sub(a,b)<<endl;
        break;
        case '*':
        cout<<"The multi Of :"<<Ca.multi(a,b)<<endl;
        break;
        case '/':
        cout<<"The division Of :"<<Ca.div(a,b)<<endl;
        break;
        default:
        cout<<"Invalid Choice:";
        break;

    }


}
