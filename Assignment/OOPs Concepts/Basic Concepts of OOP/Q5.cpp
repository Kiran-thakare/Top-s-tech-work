// Define a class to represent a bank account. Include the following members:
#include<iostream>
using namespace std;
class Bank{
    private:
    string Name;
    int AccountNumber;
    string AccType;
    double balance;
    public:
    Bank(string n,int accno,string t,double bal){
        Name=n;
        AccountNumber=accno;
        AccType=t;
        balance=bal;
    }
    string setName(string n){
        Name=n;
    }
    string getName(){
        return Name;

    }
    int setAccountno(int accno){
        AccountNumber=accno;;
    }
    int getAccountno(){
        return AccountNumber;
    }
    string setType(string t){
        AccType=t;
    }
    string getType(){
        return AccType;
    }
     int setbalance(int bal){
        balance=bal;
    }
    int getbalance(){
        return balance;
    }
      int deposit(int amount){
        balance+=amount;
    }
    int withdraw(int amount){
        balance-=amount;
    }

};
int main(){
    int dep,wid;
    Bank b1("Kiran",38973536,"Saving",50000);

    cout<<"Account Holder Name:"<<b1.getName()<<endl;
    cout<<"Account Number:"<<b1.getAccountno()<<endl;
    cout<<"Account Type:"<<b1.getType()<<endl;
    cout<<"Account Balance:"<<b1.getbalance()<<endl;
    cout<<"Enter Deposit Amount :";
    cin>>dep;
    b1.deposit(dep);
     cout<<" Deposit After Account Balance:"<<b1.getbalance()<<endl;
    cout<<"Withdraw Amount:";
    cin>>wid;
    b1.withdraw(wid);
    cout<<"Withdraw After New Account Balance:"<<b1.getbalance()<<endl;
}

