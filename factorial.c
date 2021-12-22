#include<stdio.h>
main()
{
int fact=1,i,n;
printf("Enter the number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("the factorial of num is %d",fact);
}