//Q50.
#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0;
    float avg;
    printf("enter size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    avg = (float)sum / n;
    printf("the average of the array elements is: %.2f\n", avg);
    return 0;
}