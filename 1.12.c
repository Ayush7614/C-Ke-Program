/*1.12. Write a program to input date in any given format like dd mm yyyy, dd-mm-yyyy, dd/mm/yyyy format
and show that date in dd-mmm-yyyy format*/

#include<stdio.h>
int main(){
	int d,m,y;
  printf("Enter date in format dd mm yyyy : ");
  scanf("%2d %2d %4d",&d,&m,&y);
  printf("dd mm yyyy in dd-mm-yyyy format=%02d-%02d-%04d dd/mm/yyyy format=%02d/%02d/%04d dd-mmm-yyyy format=%02d-%03d-%04d",d,m,y,d,m,y,d,m,y);

}

/* nter date in format dd mm yyyy : 29 10 2001\
dd mm yyyy in dd-mm-yyyy format=29-10-2001 dd/mm/yyyy format=29/10/2001 dd-mmm-yyyy format=29-010-2001
--------------------------------
Process exited after 9.116 seconds with return value 102
Press any key to continue . . .
*/
