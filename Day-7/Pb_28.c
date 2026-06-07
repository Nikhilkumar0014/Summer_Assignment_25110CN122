//Q28.
#include<stdio.h>
int rev =0;
int reverese(int n)
{
    if(n==0)
       return rev;
    else
    {
       rev = rev*10 + n%10;
       return reverese(n/10);
    }
}
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("reverse of the number is : %d",reverese(n));
    return 0;
}