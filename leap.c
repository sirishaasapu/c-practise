/*leap year or not*/
#include<stdio.h>
main()
{
	int year;
	printf("enter your year:");
	scanf("%d",&year);
	if((year%4)==0)
	printf("%d is leap year",year);
	else
	printf("%d is not a leap year",year);
}