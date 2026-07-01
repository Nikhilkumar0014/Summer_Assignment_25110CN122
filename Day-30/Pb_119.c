//Q119.
#include<stdio.h>
int main()
{
    int id;
    char empname[20];
    printf("enter employee id:");
    scanf("%d",&id);
    printf("enter employee name:");
    scanf("%s",empname);
    printf("employee details:\n");
    printf("id=%d\n",id);
    printf("name=%s\n",empname);
    return 0;
}