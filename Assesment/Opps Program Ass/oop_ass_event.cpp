#include<iostream>
#include<string>
using namespace std;
class Eventmanage{
   public:
    string eventname,Flname;
    int NOG,NOM;
    public:
    int getManage(){
    cout<<"********** Event Management System *************"<<endl;
    cout<<"Enter The Name Of Event :"<<endl;
    cin>>eventname;
    cin.ignore();
    cout<<"Enter Customers First Name and Last Name :"<<endl;
    getline(cin,Flname);
    cout<<"Enter The No Of Guest :"<<endl;
    cin>>NOG;
    cout<<"Enter No Of Minutes And Events :"<<endl;
    cin>>NOM;
    }

};
class Bill:public Eventmanage{
       public:
        double CostPerHour = 18.50;
        double CostPerMinute = .40;
         double CostOfDinner = 20.70;
        int numserver=0,Cost1, Cost2,CostForOneServer=0;
         int TotalFoodCost=0,AverageCost=0,totalCost=0,DepositAmount=0;
      public:
      int getdata(){
            getManage();

       numserver=NOG/20;

       Cost1 =NOG/60* CostPerHour;
       Cost2 =NOM %60* CostPerMinute;
       CostForOneServer= Cost1+Cost2;

       TotalFoodCost = NOG * CostOfDinner;

         AverageCost = TotalFoodCost / NOG;

        totalCost = TotalFoodCost + (CostForOneServer * numserver);

        DepositAmount = totalCost * .25;
    }
    int Show(){

        cout<<"***********************Event Estimate For :"<<Flname<<"************************"<<endl;
        cout<<"Number Of Server :"<<numserver<<endl;
        cout<<"The Cost For Servers:"<<CostForOneServer<<endl;
        cout<<"The Cost For Food is :"<<TotalFoodCost<<endl;
        cout<<"Average Cost Per Person:"<<AverageCost<<endl;
        cout<<"The Total cost is:"<<totalCost<<endl;
        cout<<"Please Deposit 25%  Amount to Reserve the Event "<<endl;
        cout<<"The Deposit Need is :"<<DepositAmount<<endl;
    }
} ;
int main(){
  Bill bi;
  bi.getdata();
  bi.Show();
}
