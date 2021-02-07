/*1.13. Write a program to input data of a student like rollno (int), name (string with space),
 gender (char), email (string without space), mobile(string without space),
course (string with space) and show the output.*/
#include<stdio.h>
#include<string.h>
int main(){
	int rollno;
	char name[50],gender,email[50],mobile[15],course[30];
  printf("Enter rollno : ");scanf("%d",&rollno);
  printf("Enter name : ");fflush(stdin);gets(name);
  printf("Enter gender : ");fflush(stdin);
  gender=getchar();
  printf("Enter email : ");scanf("%s",&email);
  printf("Enter mobile no. : ");scanf("%s",&mobile);
  printf("Enter Course : ");fflush(stdin);gets(course);fflush(stdin);
  printf("%d %s %c %s %s %s",rollno,name,gender,email,mobile,course);
}
/* Enter rollno : 39
Enter name : Ayush
Enter gender : Male
Enter email : Enter mobile no. : ayushknj3@gmail.com +9199999999
Enter Course : B.TECH ECE
39 Ayush M com ayushknj3@gmail.com B.TECH ECE
--------------------------------
Process exited after 41.73 seconds with return value 45
Press any key to continue . . .
*/
