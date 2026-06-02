//Q6.
#include<stdio.h>
int main()
{
    int a, reverse = 0;
    printf("Enter a number:");
    scanf("%d",&a);
    while(a!=0) {
        reverse = reverse * 10 + a % 10;
        a/=10;
    }
    printf("Reverse of the number = %d", reverse);
    return 0;
}

