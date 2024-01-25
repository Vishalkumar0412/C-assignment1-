#include<stdio.h>
#include<conio.h>
void main(){
int angle1,angle2,angle3;
int sumOfAngles;
printf("Enter the three angles :");
scanf("%d",&angle1);
scanf("%d",&angle2);
scanf("%d",&angle3);
sumOfAngles= angle1+angle2+angle3;
if(sumOfAngles==180){
printf("it is a triangle");
}
else{ 
    printf("it is not a triangle");
}
}
