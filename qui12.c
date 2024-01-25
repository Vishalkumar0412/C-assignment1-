#include<stdio.h>
#include<conio.h>
void main(){
int mNum;
printf("enter the number of month:  ");
scanf("%d",&mNum);
switch(mNum){
case 1: printf("January have 31 days");
break;
case 2: printf("February have 28 or 29 day in leap year");
break;
case 3 : printf("March have 31 days");
break;
case 4 : printf("April Have 30 days");
break;
case 5  : printf("May have 31 days");
break;
case 6 : printf("June have 30 days");
break;
case 7 : printf("July have 31 days");
break;
case 8 : printf("August have 31 days");
break;
case 9 : printf("Septmeber have 30 days");
break;
case 10 : printf("October have 31 days");
break;
case 11 : printf("November have 30 days");
break;
case 12 : printf("December have 31 days");
break;
default: printf("This is an Invailed number");
}

}
