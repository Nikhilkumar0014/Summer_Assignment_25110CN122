//Q105.
#include<stdio.h>
int main()
{
    int roll;
    char name[50];
    float marks;
    printf("enter roll no.");
    scanf("%d",&roll);
    printf("enter name");
    scanf("%s",name);
    printf("enter marks:");
    scanf("%f",&marks);
    printf("\nstudent record\n");
    printf("roll no:%d\n",roll);
    printf("name:%s\n",name);
    printf("marks:%.2f\n",marks);
    return 0;
}