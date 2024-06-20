//26.Convert temperature Fahrenheit to Celsius
#include<stdio.h>
int main(){
    float Fahrenheit,Celsius;
    printf("Enter The Fahrenheit:");
    scanf("%f",&Fahrenheit);
    Celsius=(Fahrenheit-32)*5/9;
    printf("celsius:%f",Celsius);

}
