// Write a program to find the multiplication values and the cubic values using
// inline function
#include<iostream>
using namespace std;
inline int cube(int num){return num*num*num;}
int main(){
    int n;
    cout<<"Enter Number :";
    cin>>n;
    cout<<"The Number Of Cube:"<<cube(n)<<endl;
}
