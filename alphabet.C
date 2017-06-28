#include<stdio.h>
#include<conio.h>
void main()
{
char a;
printf("enter any character");
a=getchar();
if(isalpha(a)>0)
printf("it is alphabet");
else
printf("it is alphanumeric");
getch();
}
