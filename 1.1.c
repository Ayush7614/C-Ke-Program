/*1.1. Write a program to input a floating number and show that number with two decimal points*/
#include<stdio.h>
int main(){
float a;
printf("Enter a float number : ");
scanf("%f",&a);
printf("Float number with two decimal points is  =%.2f",a);
}
/*
Enter a float number : 37.666
Float number with two decimal points is  =37.67
--------------------------------
Process exited after 5.493 seconds with return value 47
Press any key to continue . . .*/
