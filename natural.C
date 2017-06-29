#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,sum=0;
printf("enter the natural number");
scanf("%d",&n);
i=1;
while(i<=n)
{
sum+=i;
++i;
}
printf("sum=%d",sum);
return 0;
}
