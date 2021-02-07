/*1.14. Write a program to input name of a person and print first four character only*/
#include<stdio.h>
int main(){
	char a[10];
	printf("Enter your name :");
	scanf("%4s",&a);
    printf("Name with four character=%s",a);
}
/* Enter your name :ayush
Name with four character=ayus
--------------------------------
Process exited after 3.697 seconds with return value 29
Press any key to continue . . .
*/
