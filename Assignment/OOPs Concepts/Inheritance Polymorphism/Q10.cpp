// Write a program to concatenate the two strings using Operator Overloading
#include<iostream>
using namespace std;
class Str{
    public:
     string str1,str2;
     public:
     void getstr(){
        cout<<"Enter String 1:";
        cin>>str1;
        cout<<"Enter String 2:";
        cin>>str2;
     }
     void show(){
        cout<<"String 1:"<<str1<<endl;
        cout<<"string 2:"<<str2<<endl;
     }
     void operator +(Str s){
        string  res;
        res=str1+s.str2;
        cout<<"concatenate the two strings :"<<res<<endl;
     }
};
int main(){
    Str st;
    st.getstr();
    st.show();
    st.operator+(st);
}
