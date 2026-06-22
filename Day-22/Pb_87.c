//Q87.
#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,count=0;
    printf("enter string:");
    gets(str);
    printf("enter character:");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++)
    {
        if (str[i]== ch)
           count++;
    }
    printf("frequency=%d",count);
    return 0;
}