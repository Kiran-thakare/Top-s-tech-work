// Write a C++ program to create a class called Car that has private
// member variables for company, model, and year. Implement member
// functions to get and set these variables.
#include<iostream>
using namespace std;
class Car{
    private:
    string company;
    string model;
    int year;
    public:
    Car(string c,string mo,int y){
        company=c;
        model=mo;
        year=y;
    }
    string getcompany(){
        return company;
    }
    string  getmodel(){
        return model;
    }
    int getyear(){
        return year;
    }
      string setcompany(string c){
        company=c;
    }

    string  setmodel(string mo){
       model=mo;
    }
    int setyear(int y){
      year=y;
    }

};
int main(){
    Car c("Maruti Suzuki","DIZRE",2016);
    cout<<"The Car Name: "<<c.getcompany()<<endl;
    cout<<"Model Name:"<<c.getmodel()<<endl;
    cout<<"year:"<<c.getyear()<<endl;

    /*After Upadte Set Method */
    c.setcompany("Audi");
    c.setmodel("Q8");
    c.setyear(2019);
     cout<<"The Car Name: "<<c.getcompany()<<endl;
    cout<<"Model Name:"<<c.getmodel()<<endl;
    cout<<"year:"<<c.getyear()<<endl;
}
