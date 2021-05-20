#include<stdio.h>
int main()
{
	int num,sum=0,dig;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num!=0)
	{
		dig=num%10;
		sum=sum+dig;
		num=num/10;
	}
	printf("\n Sum of the digit:%d",sum);
	return 0;
}
