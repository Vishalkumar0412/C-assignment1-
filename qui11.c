#include<stdio.h>
#include<conio.h>
void main(){
int weekNum;
printf("Enter the Number for week");
scanf("%d",&weekNum);
switch(weekNum){
case 1 : printf("it is sunday");
break;
case 2 : printf("it is monday");
break;
case 3 : printf("it is tuesday");
break;
case 4 : printf("it is wednessday");
break;
case 5 : printf("it is thursday");
break;
case 6 : printf("it is friday");
break;
case 7 : printf("it is sunday");
break;
default: printf("it is invalid Number enter different number");
getch();
}
}
