// Assume a class cricketer is declared. Declare a derived class batsman from
// cricketer. Data member of batsman. Total runs, Average runs and best
// performance. Member functions input data, calculate average runs, Display
// data. (Single Inheritance)
#include<iostream>
using namespace std;
class cricketer{
    public:
     string name;
     int age;
};
class Batsman:public cricketer{
    public:
    int totalrun;
    int bestperformance;
    int mp;
    public:
    int input(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter Age:";
        cin>>age;
        cout<<"Enter Total runs";
        cin>>totalrun;
        cout<<"Most play run:";
        cin>>mp;
        cout<<"Enter Best performance";
        cin>>bestperformance;
    }
    void avragerun(){
        int avragerun=totalrun/mp;
         cout<<"Total Run Avrage:"<<avragerun<<endl;

    }
    int show(){
        cout<<"Cricketer Name:"<<name<<endl;
        cout<<"Cricketer Age:"<<age<<endl;
        cout<<"cricketer Most Play :"<<mp<<endl;
        cout<<"Cricketer Total Runs:"<<totalrun<<endl;
        cout<<"Cricketer Best Performance :"<<bestperformance<<endl;

    }


};
int main(){
    Batsman b1;
    b1.input();
    b1.show();
    b1.avragerun();
}
