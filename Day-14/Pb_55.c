//Q55.
#include <stdio.h>
int main() {
    int a[100], n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int largest = a[0], second = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > largest) 
        {
            second = largest;
            largest = a[i];
        } 
        else if (a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }
    printf("second largest is %d", second);
    return 0;
}