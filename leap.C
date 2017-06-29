#include<stdio.h>
#include<conio.h>
main()
{
int year;
clrscr();
printf("enter the year");
scanf("%d",&year);
if(year%400==0)
printf("%d is a leap year",year);
else if(year%4==0)&&(year%100!=0)
pritnf("%d is a leap year",year);
else
printf("%d is not a leap year",year);
getch();
}
