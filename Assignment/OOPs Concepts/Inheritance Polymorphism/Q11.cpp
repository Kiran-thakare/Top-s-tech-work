// Write a program to calculate the area of circle, rectangle and triangle
// using Function Overloading
// Rectangle: Area * breadth
// Triangle: ½ *Area* breadth
// Circle: Pi * Area *Area
#include<iostream>
using namespace std;
#define pi 3.14
class Area{
    public:
     int area(int  area ){
        int circle=pi*area*area;
         cout<<"circle of area:"<<circle<<endl;
     }

     double area(double  area ,double breath){
        int triangle=(area*breath)*0.5;
         cout<<"triangle of area:"<<triangle<<endl;
     }
      int area(int length,int breath){
        int rect=length*breath;
        cout<<"Rectangle of area:"<<rect<<endl;
    }

};
int main(){
    Area ar;
    ar.area(3);
    ar.area(32.5,30.5);
    ar.area(5,8);
}
