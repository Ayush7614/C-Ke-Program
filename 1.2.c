/*1.2. Write a program to input a floating number and show without decimal point*/
#include<stdio.h>
int main(){
  float a;
  printf("Enter a float number: ");
  scanf("%f",&a);
  printf("Float number with zero decimal points is  =%.0f",a);
}
/*Enter a float number: 37.666
Float number with zero decimal points is  =38
--------------------------------
Process exited after 7.285 seconds with return value 45
Press any key to continue . . .*/
