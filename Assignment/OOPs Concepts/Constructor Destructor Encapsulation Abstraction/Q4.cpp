// Write a C++ program to implement a class called Bank Account that has
// private member variables for account number and balance. Include
// member functions to deposit and withdraw money from the account.
#include<iostream>
using namespace std;
class Bank{
    private:
    int accountno;
    int balance;
    public:
    Bank(int accno,int bal){
        accountno=accno;
        balance=bal;
    }
    int setaccountno(int accno){
        accountno=accno;
    }
    int getaccountno(){
        return accountno;
    }
     int setBalance(int bal){
       balance=bal;
    }
    int getBalance(){
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
    int acc,b,dep,wid;
    cout<<"Enter Account Number";
    cin>>acc;
    cout<<"enter balance :";
    cin>>b;
    Bank b1(acc,b);
    cout<<"Account Number :"<<b1.getaccountno()<<endl;
    cout<<"Account Balance:"<<b1.getBalance()<<endl;
    cout<<"Enter Deposit Amount :";
    cin>>dep;
    b1.deposit(dep);
    cout<<"Account Balance:"<<b1.getBalance()<<endl;
    cout<<"Enter Withdraw Amount :";
    cin>>wid;
    b1.withdraw(wid);
    cout<<"Account New Balance:"<<b1.getBalance()<<endl;

}
