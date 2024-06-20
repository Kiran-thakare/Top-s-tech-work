// Write a Program of Two 1D Matrix Addition using Operator Overloading
#include<iostream>
using namespace std;
class Matrix{
    int a[2][2];
    public:
    void getdata(){
    cout<<"\n Enter Matrix Element:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<" ";
            cin>>a[i][j];
        }
    }
}
    void display(){
    for(int i=0;i<2;i++){
        cout<<" ";
        for(int j=0;j<2;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
    void operator +(Matrix x){
    int mat[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           mat[i][j]=a[i][j]+x.a[i][j];
        }
    }
    cout<<"After Addition of Matrix \n ";
     for(int i=0;i<2;i++){
        cout<<" ";
        for(int j=0;j<2;j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
};
int main(){
    Matrix m,n;
    m.getdata();
    n.getdata();
    cout<<"\n First Matrix :\n";
    m.display();
    cout<<"\n Secound  Matrix :\n";
    n.display();
    m+n;

}
