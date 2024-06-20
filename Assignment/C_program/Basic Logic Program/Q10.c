//10.find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
int main(){
    int area,width,height,length;
    printf("Enter The Value length: ");
    scanf("%d",&length);
    printf("Enter The Value Width: ");
    scanf("%d",&width);
    printf("Enter The Value height: ");
    scanf("%d",&height);
     area=2*(width*length+height*length+height*width);
    printf("The Area Of Rectangular prism :%d",area);

}

