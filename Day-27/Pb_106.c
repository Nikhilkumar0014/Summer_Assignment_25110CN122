//Q106.
#include<stdio.h>
int main()
{
    int empid;
    char name[50];
    float salary;
    printf("enter employee id:");
    scanf("%d",&empid);
    printf("enter employee name:");
    scanf("%s",name);
    printf("enter salary:");
    scanf("%f",&salary);
    printf("\nemployee record\n");
    printf("employee id:%d\n",empid);
    printf("name:%s\n",name);
    printf("saalry:%.2f\n",salary);
    return 0;
}