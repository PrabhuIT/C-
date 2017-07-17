#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,r;
printf("enter an integer");
scanf("%d",&n);
printf("enter an range");
scanf("%d",&r);
for(i=1;i<=r;++i)
{
printf("%d*%d=%d\n",n,i,n*i);
}
return 0;
}
