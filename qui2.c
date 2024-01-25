//2. Write a C program to find maximum between three numbers.

#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c;
printf("Enter three numbers");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

if(a>b && a>c){
    printf("%d is maximum",a);
}

else if(b>a && b>c){
    printf("%d is maximum",b);
}

else if(b==a && b==c){
    printf("all numbers are eqaul these are all %d ",a);
}
else{
    printf("%d is maximum",c);
}
getch();

}
