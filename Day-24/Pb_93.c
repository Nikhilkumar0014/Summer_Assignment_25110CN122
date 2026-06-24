//Q93.
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100],temp[200];
    printf("enter first string:");
    scanf("%s",s1);
    printf("enter second string:");
    scanf("%s",s2);
    strcpy(temp,s1);
    strcat(temp,s1);
    if(strlen(s1)==strlen(s2)&&strstr(temp,s2))
        printf("string is rotation");
    else
        printf("string is not rotation");
    return 0;
}