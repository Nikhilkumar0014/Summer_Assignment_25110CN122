//Q53.
#include<stdio.h>
int main()
{
    int a[100],n,i,key,found=0;
    printf("enter size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter key to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        printf("key found at index %d",i);
    }
    else
    {
        printf("key not found");
    }
    return 0;
}