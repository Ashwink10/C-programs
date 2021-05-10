#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter A value:");//First variable
	scanf("%d",&a);
	printf("Enter B value:");//second variable
	scanf("%d",&b);
	printf("Before swapping:\n");
	printf("\n A value:%d",a);
	printf("\n B value:%d",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n After Swapping A is %d and B is is %d",a,b);
	return 0;
}
