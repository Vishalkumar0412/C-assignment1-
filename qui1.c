//Write a C program to find maximum between two numbers
#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    printf("enter two number");
    scanf("%d",&a);
    scanf("%d",&b);

    if(a>b){
        printf("%d is maximunm",a);
    }
    else if(a==b){
        printf("both are equal");
    }
    else{
        printf("%d is maximum",b);
    }


}
