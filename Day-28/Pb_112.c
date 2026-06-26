//Q112.
#include<stdio.h>
struct Contact
{
    char name[50];
    long long mobile;
};
int main()
{
    struct Contact c[10];
    int i,n;
    printf("enter no. of contacts:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter name:");
        scanf(" %[^\n]", c[i].name);
        printf("enter mobile number:");
        scanf("%lld",&c[i].mobile);
    }
    printf("\ncontact list\n");
    for(i=0;i<n;i++)
    {
        printf("name:%s\n",c[i].name);
        printf("mobile:%lld\n",c[i].mobile);
    }
    return 0;
}








