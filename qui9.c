//Write a C program to input any character and check whether it is alphabet, digit or special character.

#include<stdio.h>
#include<conio.h>
void main(){
char ch;
printf("Enter the character  :");
scanf("%c",&ch);
if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' ){
    printf("it is an alphabet");

}
else if(ch>='0' && ch<='9'){
    printf("it is a digit");
}
else{
    printf("it is a special symbol");
}
getch();

}
