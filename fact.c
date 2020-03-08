/*factorial number*/
#include<stdio.h>
main()
{
    int n,f=1,i;
	printf("enter n value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		f=f*i;
printf("factorial is %d",f);		 
}