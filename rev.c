/*reverse of given*/
#include<stdio.h>
main()
{
	int n,r;
    printf("enter n values:");
    scanf("%d",&n);
    while(n>0)
{
	r=n%10;
	n=n/10;
	printf("%d",r);
}
}

