//Q56.
#include <stdio.h>
int main() 
{
    int a[100], n, i,j;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("dupliatce elements are:");
    for (i = 0; i < n; i++) 
    {
        for(j=0 ;j<i;j++)
        {
            if( a[i]==a[j])
            break;
        }
        if(j==i)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {   
                    printf("%d ",a[i]);
                    break;
                }
            }
        }
    }
    return 0;
}