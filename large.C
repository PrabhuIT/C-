#include<stdio.h>
#include<conio.h>
void main()
{
double n1,n2,n3;
printf("enter three different numbers");
scanf("%lf%lf%lf",&n1,&n2,&n3);
if(n1>=n2 && n1>=n3)
printf("%.2f is the largest no",n1);
if(n2>=n1 && n2>=n3)
printf("%.2f is the largest no",n2);
if(n3>=n1 && n3>=n2)
printf("%.2f is the largest no",n3);
return 0;
}
