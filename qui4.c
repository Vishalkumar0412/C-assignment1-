//Write a C program to check whether a number is divisible by 5 and 11 or not.

#include<stdio.h>
#include<conio.h>
void main(){
     int a;
    printf("Enter the number");
    scanf("%d",&a);
    if(a%5==0 && a%11==0){
        printf("Yes,Number is divisible by 5 and 11 ");
}
    else{
     printf("No,Number is not divisible by 5 and 11 ");
}}

