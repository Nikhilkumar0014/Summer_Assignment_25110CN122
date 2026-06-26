//Q101.
#include<stdio.h>
int main()
{
    int secret=7,guess;
    printf("guess a number(1-10):");
    scanf("%d",&guess);
    if(guess==secret)
     printf("correct guess");
     else
     printf("wrong guess");
     return 0;
}