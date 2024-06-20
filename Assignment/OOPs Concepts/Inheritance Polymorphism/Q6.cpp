// Write a C++ Program to show access to Private Public and Protected using
// Inheritance
#include<iostream>
using namespace std;
class base{
    private:
    int pvt=1;
    protected:
    int pro=2;
    public:
    int pub=3;
    int getpvt(){
      return pvt;
    }
};
class child1:public base{
  public:
  int getprot(){
    return pro;
  }
  int getpub(){
    return pub;
  }
};

int main(){
  child1 ch;
  cout<<"The Private member Not accesed:"<<endl;
  cout<<"The public Modifier :"<<ch.getpub()<<endl;
  cout<<"The Protected Modifier :"<<ch.getprot()<<endl;

}
