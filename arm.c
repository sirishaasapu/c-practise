#include<stdio.h>
main()
{
	int n,r,sum=0,temp;
	printf("enter n value:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
		}
		if(temp==sum)
		printf("%d is a arm strong number",sum);
		else
		printf("%d is not a arm strong number",temp);
}