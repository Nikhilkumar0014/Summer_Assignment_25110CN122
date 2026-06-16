//Q62.
#include <stdio.h>
int main() {
    int arr[]={1,2,2,4,5,6,7};
    int n=7;
    int maxcount=0,element;
    for (int i = 0; i < n; i++){
        int count=1;
        for (int j = i+1; j < n; j++){
            if (arr[i]==arr[j]){
                count++;
            }
        }
        if (count>maxcount){
            maxcount=count;
            element=arr[i];
        }
    }
    printf("Element with maximum frequency: %d\n", element);
    printf("Frequency: %d\n", maxcount);
    return 0;
}