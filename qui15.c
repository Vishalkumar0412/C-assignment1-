//Write a C program to input all sides of a triangle and check whether triangle is valid or not. 
#include<stdio.h>
#include<conio.h>
void main(){
    int sum,side1,side2,side3;
    printf("enter the three side");
    scanf("%d",&side1);
    scanf("%d",&side2);
    scanf("%d",&side3);
    if(side1+side2>side3&&side1+side3>side2&&side2+side3>side1){
        printf("it is a triangle");

    }
    else{
        printf("it is not a triangle");
    }
}