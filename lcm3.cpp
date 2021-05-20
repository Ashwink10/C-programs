#include<stdio.h>
int lcm(int a,int b);
int main()
{
	int a,b,result;
	printf("First input number:");
	scanf("%d",&a);
	printf("\n Second input number:");
	scanf("%d",&b);
	printf("\n LCM of %d and %d is=%d",a,b,lcm(a,b));
}
int lcm(int a,int b)
{
	static int m=0;
	m=m+b;
	if(m%a==0 && m%b==0)
	{
		return m;
	}	
	return lcm(a,b);
}
