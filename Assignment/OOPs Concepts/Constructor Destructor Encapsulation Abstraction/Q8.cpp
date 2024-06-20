// Write a C++ program to implement a class called Student that has private
// member variables for name, class, roll number, and marks. Include
// member functions to calculate the grade based on the marks and display
// the student's information. Accept address from each student implement
// using of aggregation
#include<iostream>
using namespace std;
class Student{
    public:
        string Name;
        string Class;
        int rollNo;
        int marks;
    public:
        Student(string Name,string Class,int rollNo,int marks){
            this->Name=Name;
            this->Class=Class;
            this->rollNo=rollNo;
            this->marks=marks;
        }
};
class Marks{
    private:
    char grade;
    public:
    Student *stu;
    public:
        Marks(char grade,Student *stu){
            this->grade=grade;
            this->stu=stu;

        }
     int show(){
        cout<<"Student Name:"<<stu->Name<<endl<<"Class:"<<stu->Class<<endl<<"RollNo:"<<stu->rollNo<<endl<<"Marks:"<<stu->marks<<endl<<"Grade:"<<grade<<endl;
     }
};
int main(){
    Student st("manoj","A",1,60);
    Marks mk('B',&st);
    mk.show();
}
