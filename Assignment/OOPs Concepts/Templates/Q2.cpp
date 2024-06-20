#include<iostream>
using namespace std;
    template <typename t>
 t sort(t arr[5]){
    t i,j,temp;
    for(i=0;i<5;i++){
        for(j=0;j<i;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
 }
 template <typename t>
    t print(t arr[5]){
        t i;
    cout<<"After Sorting :";
    for(i=0;i<5;i++){
        cout<<arr[i]<<"\t";
    }
 }
 int main(){
     int arr[5]={10,50,30,20,40};
    sort<int>(arr);
    print<int>(arr);

 }
