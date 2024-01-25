//Write a C program to input any alphabet and check whether it is vowel or consonant.

#include<stdio.h>
#include<conio.h>
void main(){
char ch;
printf("Enter the alphabet    :  ");
scanf("%c",&ch);
switch(ch){
case 'a' : printf("The alphabet is vowle");
break;
case 'e' : printf("The alphabet is vowle");
break;
case 'i' : printf("The alphabet is vowle");
break;
case 'o' : printf("The alphabet is vowle");
break;
case 'u' : printf("The alphabet is vowle");
break;
case 'A' : printf("The alphabet is vowle");
break;
case 'E' : printf("The alphabet is vowle");
break;
case 'I' : printf("The alphabet is vowle");
break;
case 'O' : printf("The alphabet is vowle");
break;
case 'U' : printf("The alphabet is vowle");
break;s
default : printf("The alphabet is consonant");
break;
}
}
