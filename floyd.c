/*floyd triangles*/
#include<stdio.h>
#define n 5
void main()
{
	int i,j,k;
    for(i=0;i<=n;i++)
    {
			for(k=n;k>=i;k--)
	       	printf(" ");
			printf("%d",i);
	        	for(j=0;j<=i;j++)
			      printf("*");
			      printf("\n");
				}
  
   for(i=0;i<=n;i++)
     {
			printf("\n");
	        	for(j=0;j<=i;j++)
			      printf("*");
			      printf("%d",i);
      }
        printf("\n");
       for(i=0;i<=n;i++)
    {
			for(k=n;k>=i;k--)
	       	printf(" ");
	        	for(j=0;j<=i;j++)
			      printf("%d",i);
			      printf("\n");
				}
       for(i=0;i<=n;i++)
     {
			printf("\n");
	        	for(j=0;j<=i;j++)
			      printf("%d",i);
      }
      
}
