#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=0,c=0,d=0,e;
printf("enter the number");
scanf("%d",&a);
e=a;
while(a!=0)
{
b=a%10;
d=pow(c,3);
b=b+d;
a=a/10;
}
if(b==e)
printf("the given number is armstrong");
else
printf("the given number is not");
}
