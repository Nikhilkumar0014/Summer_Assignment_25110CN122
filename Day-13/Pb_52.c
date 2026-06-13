//Q52.
#include <stdio.h>
int main() {
    int arr[100], n, i;
    int even=0,odd=0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even += arr[i];
        } else {
            odd += arr[i];
        }
    }
    printf("The sum of even elements in the array is: %d\n", even);
    printf("The sum of odd elements in the array is: %d\n", odd);
    return 0;
}