#include <stdio.h>
 
int primefun(int, int);
 
int main()
{
    int num, prime;
    printf("Enter a number: ");
    scanf("%d", &num);
    prime = primefun(num, num / 2);
    if (prime == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
 
int primefun(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return primefun(num, i - 1);
       }       
    }
}
