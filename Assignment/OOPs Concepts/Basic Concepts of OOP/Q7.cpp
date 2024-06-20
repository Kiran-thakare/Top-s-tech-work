// Write a C++ program to create a class called Rectangle that has private
// member variables for length and width. Implement member functions to
// calculate the rectangle's area and perimeter.
#include<iostream>
using namespace std;
class Rectangle{
    private:
     int length,width;
     public:
     int get(){
        cout<<"Enter Length :";
        cin>>length;
        cout<<"Enter Width:";
        cin>>width;
     }
     int Area(){
        return length*width;
     }
     int show(){
        cout<<"The Area And Parimeter:"<<Area()<<endl;

     }
};
int main(){
    Rectangle rec;
    rec.get();
    rec.show();
}
