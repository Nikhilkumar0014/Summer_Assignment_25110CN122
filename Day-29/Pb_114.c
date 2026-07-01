//Q114.
#include <stdio.h>
int main()
{
    int a[100],n,i,sum=0,ch;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("1.display\n2.sum\n3.maximum\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("The elements are: ");
            for(i=0;i<n;i++)
            {
                printf("%d ",a[i]);
            }
            break;
        case 2:
            for(i=0;i<n;i++)
            {
                sum+=a[i];
            }
            printf("The sum of the elements is: %d",sum);
            break;
        case 3:
        {
            int max=a[0];
            for(i=1;i<n;i++)
            {
                if(a[i]>max)
                {
                    max=a[i];
                }
            }
            printf("The maximum element is: %d",max);
            break;
        }
        default:
            printf("Invalid choice");
    }
    return 0;
}