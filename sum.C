#include<stdio.h>
#include<conio.h>
void main()
{
int n,j,sum=0;
clrscr();
printf("enter number");
scanf("%d",&n);
for(j=1;j<=n;j++)
{
printf("%d",j);
sum=sum+j;
}
printf("\n sumof %d is:%d",n,sum);
getch();
}
