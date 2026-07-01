//Q120.
#include<stdio.h>
void display(int roll,char name[])
{
    printf("\nstudent details\n");
    printf("roll=%d\n",roll);
    printf("name=%s\n",name);
}
int main()
{
    int roll;
    char name[20];
    printf("enter roll number:");
    scanf("%d",&roll);
    printf("enter name:");
    scanf("%s",name);
    display(roll,name);
    return 0;
}