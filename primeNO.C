#include<stdio.h>
#include<conio.h>
int checknumber(int n);
int main()
{
int a,b,c,d;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
printf("prime no between %d and %d are:",a,b);
for(c=a+1;c<b;++c)
{
if(d==1)
{
printf("%d",c);
}
return 0;
}
int checknumber(int n)
{
int j,d=1;
for(j=2;j<=n/2;++j)
if(n%j==0)
{
d=0;
break;
}
}
return d;
}
