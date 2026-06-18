//Q71.
#include <stdio.h>
int main() {
    int a[5]={1,2,3,4,5};
    int low=0,high=4,mid;
    int key=4;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key){
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