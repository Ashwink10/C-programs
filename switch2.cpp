#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number 0 or 1:");
	scanf("%d",&a);
	switch (a)
	{
		case 0:
			printf("Choice is 0");
			break;
		case 1:
			printf("Choice is 1");
			break;
		default:
			printf("No your choice of number is not in this list");
	}
	return 0;
}
