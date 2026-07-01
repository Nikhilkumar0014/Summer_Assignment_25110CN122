//Q71.
#include <stdio.h>
int main() {
    int a[5],i,low=0,high=4,mid,key;
    printf("enter 5 numbers:");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d",&key);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            printf("the element is found at %d", mid+1);
            break;
        }
        else if(key>a[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return 0;
}