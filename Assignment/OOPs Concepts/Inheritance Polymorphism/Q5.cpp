//  Assume that the test results of a batch of students are stored in three different
// classes. Class Students are storing the roll number. Class Test stores the
// marks obtained in two subjects and class result contains the total marks
// obtained in the test. The class result can inherit the details of the marks
// obtained in the test and roll number of students. (Multilevel Inheritance)
#include<iostream>
using namespace std;
class Student{
    public:
    int rollno;
    public:
    int getrollNo(){
        cout<<"Enter RollNo:";
        cin>>rollno;
    }
    int showrollNo(){
        cout<<"Roll No:"<<rollno<<endl;
    }
};
class Test:public Student{
    public:
    int Mathmarks;
    int sciencemarks;
    public:
    int getmarks(){
        getrollNo();

        cout<<"Enter MArks:";
        cin>>Mathmarks>>sciencemarks;
    }
    int showmarks(){
    cout<<"Mathmatics Marks:"<<Mathmarks<<endl<<"Science Marks:"<<sciencemarks<<endl;
    }
};
class result:public Test{
    public:
    int test_result;
    public:
    int show(){
        getmarks();
        test_result=Mathmarks+sciencemarks;
    }
    int display(){
         showrollNo();
        showmarks();
        cout<<"The Result Of Students:"<<test_result<<endl;
    }
};
int main(){
    result res;
    res.show();
    res.display();
}
