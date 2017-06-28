#include<stdio.h>
main()
{
int a;
printf("enter the number:");
scanf("%d",&a);
if(a==0)
printf("%d is zero");
else if(a>0)
printf("%d is positive");
else if(a<0)
printf("%d is negative");
}
