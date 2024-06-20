// Accept marks from user and check pass or fail
#include<stdio.h>
int main(){
    int marks;
    printf("Enter The Marks :");
    scanf("%d",&marks);
    if(marks>=50){
        printf("This Student is Pass ");
    }
    else{
        printf("Student Fail For Exam ");
    }
}
