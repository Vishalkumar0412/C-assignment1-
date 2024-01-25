//Write a C program to check whether a number is even or odd
#include<stdio.h>
#include<conio.h>
void main(){
int a;
printf("Enter the number");
scanf("%d",&a);
if(a%2==0){
    printf("The number is even");
}
else{
    printf("The number is odd");
}
}
