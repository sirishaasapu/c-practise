/*banking-bank tranctions*/
#include<stdio.h>
main()
{
	int i,n,op,valid=0,balance=36000,dep,draw;
	printf("please enter a/c number:");
	scanf("%d",&n);
	if(n!=valid)
	{
    printf("*******valid user********\n");
	printf("1.about balance\n2.deposit\n3.with draw\n4.exit\n");
	printf("choose ur option:\n");
    scanf("%d",&op);
	switch(op)
	{
		case 1:printf("want to check balance in account\n");
		printf("your balance:%d",balance);
		break;
		case 2:printf("want to deposit\n");
		printf("enter amount to deposit:");
		scanf("%d",&dep);
		balance=balance+dep;
		printf("amount deposited succesfully\n");
		printf("current balance is %d",balance);
		break;
		case 3:printf("want to withdraw amount\n");
		printf("enter amount to withdraw:");
		scanf("%d",&draw);
		if(balance>=draw)
		{
			balance=balance-draw;
			printf("amount withdrawed sucessfully\n");
			printf("your current amount is:%d",balance);
			}
			else
			{
				printf("insufficient balance\n");
				printf("your current amount is:%d",balance);
			}
			break;
		case 4:printf("want to exit");break;
		default:printf("@@@@@@@@@@@invalid option@@@@@@@@@@@@@");break;
	    }
			}
	else
	printf("*******************invalid user*************************");
}