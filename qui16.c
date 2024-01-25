//Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle
#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c;
    printf("enter the three sides   :");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
     if(a+b>c&&a+c>b&&b+c>a){
       if(a==b&&b==c){
        printf("the triangle is an equailuitreal triangle");
       }
       else if(a==b || b==c|| c==a){
        printf("the triangle is isosceles triangle");
       }
       else{
        printf("the triangle is scalene");
       }
       }
       else{
        printf("it is not a vailid triangle ");
       }
    }
    
