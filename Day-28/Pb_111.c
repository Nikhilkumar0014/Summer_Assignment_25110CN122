//Q111.
#include<stdio.h>
int main()
{
    int seats,book;
    printf("enter total seats:");
    scanf("%f",&seats);
    printf("enter seats to book:");
    scanf("%f",&book);
    if(book<=seats)
    {
        seats-=book;
        printf("booking successful\n");
        printf("remaining seats=%d",seats);
    }
    else
    {
    printf("seats not available");  
    }
    return 0;
}