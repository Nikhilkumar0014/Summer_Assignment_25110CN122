//Q51.
#include<stdio.h>
int main()
{
    int arr[100],n,i,max,min;
    printf("enter size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max = min = arr[0];
    for(i=1;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("the maximum element in the array is: %d\n", max);
    printf("the minimum element in the array is: %d\n", min);
    return 0;
}