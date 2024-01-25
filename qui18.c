// Write a C program to calculate profit or loss
#include<stdio.h>
#include<conio.h>
void main (){
    int cp,sp;
    printf("enter the saleing price of product  :");
    scanf("%d",&sp);
    printf("enter the cost price of product  :");
    scanf("%d",&cp);
    if(cp>sp){
        printf("oh ! you got loss");
    }
    else if(cp<sp){
        printf("wow ! you got profit");

    }
    else{
        printf("there is no profit no loss");
    }
}