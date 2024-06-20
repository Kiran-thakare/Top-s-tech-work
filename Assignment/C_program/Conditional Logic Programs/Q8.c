//WAP to accept the height of a person in centimeters and categorize the person according to their height.
#include<stdio.h>
int  main(){
    float height;
    printf("Enter Height: ");
    scanf("%f",&height);
    if(height<150.0){
        printf("The Person smaller in height");
    }
    else if ((height>=150.0) && (height<165.0)){
        printf("\n The person average Height ");
    }
     else if ((height>=165.0) && (height<=195.0)){
        printf("\n The person is taller ");

    }
    else{
        printf("\n the abnormal");
    }
}
