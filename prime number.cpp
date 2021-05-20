#include<stdio.h>  
int main()
{    
int n,i,m=0,prime=0;    
printf("Enter an number:");    
scanf("%d",&n);    
m=n/2;    
	for(i=2;i<=m;i++)    
	{    
		if(n%i==0)
		{    
		printf("%d number is not a prime number",n);    
		prime=1;    
		break;    
		}    
	}    
	if(prime==0)    
	printf("%d number is prime number",n);     
return 0;  
}    
