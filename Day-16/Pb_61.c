//Q61.
#include <stdio.h>
int main() {
    int arr[]={1,2,3,4};
    int n=5;
    int sum=0,total;
    for (int i = 0; i < n-1; i++){
        sum+=arr[i];
    }
    total=n*(n+1)/2;
    int missing=total-sum;
    printf("Missing number: %d\n", missing);
    return 0;
}