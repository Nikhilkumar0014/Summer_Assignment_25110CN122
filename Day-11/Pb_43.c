//Q43.
#include<stdio.h>
int isPrime(int n)
{
    int i;
    if(n<=1)
     return 0;
    for(i=2;i<n;i++)
    {
       if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{   int n;
    printf("enter a number:");
    scanf("%d",&n);
    
    if(isPrime(n))
     printf("prime");
    else
     printf("not prime");
    return 0;
}
6
