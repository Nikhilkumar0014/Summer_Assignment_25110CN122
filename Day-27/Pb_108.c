//Q108.
#include <stdio.h>
int main()
{
    char name[50];
    int m1,m2,m3,total;
    float per;
    printf("enter name of student:");
    scanf("%s",name);
    printf("enter marks of 3 subjects:");
    scanf("%d%d %d",&m1,&m2,&m3);
    total=m1+m2+m3;
    per=(total/3.0);
    printf("name of student:%s\n",name);
    printf("subject 1 marks:%d\n",m1);
    printf("subject 2 marks:%d\n",m2);
    printf("subject 3 marks:%d\n",m3);
    printf("total marks:%d\n",total);
    printf("percentage:%.2f\n",per);
    if(per>=90)
    {
        printf("grade:A\n");
    }
    else if(per>=75)
    {
        printf("grade:B\n");
    }
    else if(per>=50)
    {
        printf("grade:C\n");
    }
    else
    {
        printf("grade:F\n");
    }
    return 0;
}