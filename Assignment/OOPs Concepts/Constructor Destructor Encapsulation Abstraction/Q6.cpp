// Write a C++ program to implement a class called Employee that has
// private member variables for name, employee ID, and salary. Include
// member functions to calculate and set salary based on employee
// performance. Using of constructor
#include<iostream>
using namespace std;
 class Employee{
        private:
        string name;
        int emp_id;
        int salary;
        public:
        Employee(string n,int emid,int sal){
            name=n;
            emp_id=emid;
            salary=sal;
        }
        string setname(string n){
            name=n;
        }
        string getname(){
            return name;

        }
         int setid(int emid){
            emp_id=emid;

        }
        int getid(){
            return emp_id;
        }

         int setsalary(int sal){
            salary=sal;

        }
        int getsalary(){
            return salary;
        }
       int calculate(int amount){

           salary+=amount;
        }

 };
int main(){
    Employee emp("Rahul",101,50000);
    int am;
    cout<<"Employee Name:"<<emp.getname()<<endl;
    cout<<"Employee Id :"<<emp.getid()<<endl;
    cout<<"Employee Salary:"<<emp.getsalary()<<endl;
     emp.setsalary(50000);
      cout<<"performance Based Salary Enter:";
        cin>>am;
    emp.calculate(am);
    cout<<"The Employee Salary is :"<<emp.getsalary()<<endl;

}
