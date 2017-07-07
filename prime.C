#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c=0;
printf("enter the a value");
scanf("%d",&a);
for(b=2;b<=sqrt(a);++b)
{
if(a%b==0)
{
c=1;
break;
}
}
if(c==0)
printf("%d is a prime number",n);
else
printf("%d is not a prime",n);
getch();
}
