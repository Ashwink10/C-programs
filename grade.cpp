#include<stdio.h>
int main()
{
	int mark;
	printf("Enter the marks:");
	scanf("%d",&mark);
	if(mark>=85 && mark<=100)
	{
		printf("\n Grade A");
	}
	if(mark>=70 && mark<=84)
	{
		printf("\n Grade B");
	}
	if(mark>=55 && mark<=69)
	{
		printf("\n Grade C");
	}
	if(mark>=40 && mark<=54)
	{
		printf("\n Grade D");
	}
	if(mark>=0 && mark <=39)
	{
		printf("\n Grade F");
	}
	return 0;
}
