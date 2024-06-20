// 4. Write a C++ program to implement a class called Circle that has private
// member variables for radius. Include member functions to calculate the
// circle's area and circumference.
#include<iostream>
using namespace std;
class Circle{
    private:
    int radius;
    public:
    int get(){
        cout<<"Enter radius:";
        cin>>radius;
    }
     int area(){
        return 3.14*radius*radius;
     }
     int AreaOfCircumference(){
        return 2*3.14*radius;

     }
     int display(){
        cout<<"The Area Of :"<<area()<<endl;
        cout<<"The Area Of Circumfrence :"<<AreaOfCircumference()<<endl;

     }
};
int main(){
    Circle c;
    c.get();
    c.display();
}
