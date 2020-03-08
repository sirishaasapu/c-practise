/*prime number or not*/
#include<stdio.h>
#include<conio.h>
main()
{
int n,i,c=0;
printf("enter n value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
	c++;
}
}
if(c==2)
printf("prime number");
else
printf("not a prime number"); 
}