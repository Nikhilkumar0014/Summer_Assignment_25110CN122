//Q115.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int ch;
    printf("Enter a string: ");
    gets(str);
    printf("1.length\n2.uppercase\n3.lowercase\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("The length of the string is: %d",strlen(str));
            break;
        case 2:
        {
            int i;
            printf("The uppercase of the string is: ");
            for(i=0;i<strlen(str);i++)
            {
                if(str[i]>='a' && str[i]<='z')
                {
                    str[i]=str[i]-32;
                }
                printf("%c",str[i]);
            }
            break;
        }
        case 3:
        {
            int i;
            printf("The lowercase of the string is: ");
            for(i=0;i<strlen(str);i++)
            {
                if(str[i]>='A' && str[i]<='Z')
                {
                    str[i]=str[i]+32;
                }
                printf("%c",str[i]);
            }
            break;
        }
        default:
            printf("Invalid choice");
    }
    return 0;
}