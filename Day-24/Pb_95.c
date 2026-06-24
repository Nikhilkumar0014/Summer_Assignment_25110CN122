//Q95.
#include<stdio.h>
#include<string.h>
int main()
{
     char str[100];
     int i,len=0,max=0,start=0,maxstart=0;
     printf("enter a sentence:");
     fgets(str,sizeof(str),stdin);
     for(i=0;str[i]!='\0';i++)
     {
        if (str[i]!=' '&& str [i]!='\n')
        {
            len++;
        }
        else
        {
            if(len>max)
            {
                max=len;
                maxstart=start;
            }
            len=0;
            start=i+1;

        }
     }
     printf("longest word: ");
     for(i=maxstart;i<maxstart+max;i++)
     {
        printf("%c",str[i]);
     }
     return 0;
}