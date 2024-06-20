// Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;
class Rectangle{
    protected:
      int length,width;
    public:
   int setlength(int l){
    length=l;
   }
   int setwidth(int w){
    width=w;
   }
};
class Area:public Rectangle{
    public:
    int area(){
      int area=length*width;
        cout<<"The Area Of Rectangle is :"<<area<<endl;
    }
};
int main(){
    Area ar;
    ar.setlength(5);
    ar.setwidth(8);
    ar.area();
}
