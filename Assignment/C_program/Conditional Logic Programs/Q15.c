//  Write a C program to determine eligibility for admission to a professional course based on the following criteria
// Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50
  //and Total in all three subject >=190 or Total in Maths and
// Physics >=140 ----- Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51
//Input the marks
// obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
// 188 Total marks of Maths and Physics : 137 The candidate is not eligible.
#include<stdio.h>
void main()
{

  int Maths,Phy,Chem;
  printf("Input the marks obtained in Physics :");
  scanf("%d",&Phy);
  printf("Input the marks obtained in Mathematics :");
  scanf("%d",&Maths);
  printf("Input the marks obtained in Chemistry : ");
  scanf("%d",&Chem);

  if(Maths>=65 && Phy>=55 && Chem>=50 && (Maths+Phy+Chem)>=180){
    printf("The candidate is eligible for admission\n");
    }
    else if(Maths+Phy>=140){
    printf("The candidate is eligible for admission\n");
    }
    else{
    printf("The candidate is not eligible for admission\n" );
    }
}
