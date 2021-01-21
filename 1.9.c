/*1.9. Write a program to input a date in dd-mm-yyyy format and print date as dd/mm/yyyy format*/
#include<stdio.h>
int main(){
	int d,m,y;
	printf("Enter date in format of dd-mm-yyyy :");
	scanf("%d-%d-%d",&d,&m,&y);
	printf("dd-mm-yyyy in dd/mm/yyyy=%02d/%02d/%04d",d,m,y);
}
/*
Enter date in format of dd-mm-yyyy :29-10-2001
dd-mm-yyyy in dd/mm/yyyy=29/10/2001
--------------------------------
Process exited after 9.696 seconds with return value 35
Press any key to continue . . .
*/
