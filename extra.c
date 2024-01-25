// wap for take 10 inputs from user and find the sum of those numbers
#include<stdio.h>
#include<conio.h>
void main(){
    int i,a,sum;
    sum=0;
    for(i=1;i<=10;i++){
        printf("enter the number :");
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("the of ten numbers is :   %d ",sum);
}