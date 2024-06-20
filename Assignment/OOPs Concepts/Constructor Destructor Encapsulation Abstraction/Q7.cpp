// Write a C++ program to implement a class called Date that has private
// member variables for day, month, and year. Include member functions to
// set and get these variables, as well as to validate if the date is valid
#include<iostream>
using namespace std;
class Date{
    private:
    int day,month,year;
    public:
    Date(int d,int m,int y){
        day=d;
        month=m;
        year=y;
    }
    int getdate(){
        cout<<"Date:"<<day<<endl<<"Month:"<<month<<endl<<"Year:"<<year<<endl;
    }
    int validate(){
        if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day>0 && day<32){
            cout<<"It is valid date.";
        }
        else if((month == 4 || month == 6 || month == 9 || month == 11) && day>0 && day<31){
            cout<<"It is valid date.";
        }
        else if(month == 2){
            if((year %400 == 0 || year %100 == 0 && year %4 == 0)&& day>0 && day<=29){
                cout<<"It is valid date.";
            }
                else if(day>0 && day<=28){
                    cout<<"It is valid date.";
                }
                else{
                    cout<<"It is invalid date.";
                }
        }
        else{
            cout<<"It is invalid date.";
        }
    }
};
int main(){
    int day,month,year;
    cout<<"Input date:";
    cin>>day;
    cout<<"Input month:";
    cin>>month;
    cout<<"Input year:";
    cin>>year;

    Date d(day,month,year);
    d.getdate();
    d.validate();
}
