/*1.10. Write a program to input date in ddmmyyyy format and print as dd/mm/yyyy format*/
#include<stdio.h>
int main(){
	int d,m,y;
	printf("Enter date in format ddmmyyyy : ");
	scanf("%2d%2d%4d",&d,&m,&y);
	printf("ddmmyyyy in dd/mm/yyyy format=%02d/%02d/%04d",d,m,y);
}

/*
Enter date in format ddmmyyyy : 29102001
ddmmyyyy in dd/mm/yyyy format=29/10/2001
--------------------------------
Process exited after 9.724 seconds with return value 40
Press any key to continue . . .

/*
