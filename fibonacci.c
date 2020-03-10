/*fibonaci series using recursion*/
#include<stdio.h>
int fibonaci(int a)
{

if(a==0)
{
	return a;
}
if(a==1)
{
	return a;
}
return fibonaci(a-1)+fibonaci(a-2);
}
int main()
{
int a;
int b;
printf("enter fibonaci series number:");
b=scanf("%d",&a);
for(b=0;b<a;b++)
{
	printf("%d ",fibonaci(b));
}	

return 0;
}
