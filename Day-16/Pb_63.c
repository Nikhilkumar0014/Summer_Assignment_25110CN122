//Q63.
#include <stdio.h>
int main() {
    int arr[]={1,4,5,6,8};
    int n=5,sum=10;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (arr[i]+arr[j]==sum){
                printf("Pair found: %d + %d = %d\n", arr[i], arr[j], sum);
            }
        }
    }
    return 0;
}