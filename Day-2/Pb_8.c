//Q8.
#include<stdio.h>
int main() {
    int n,rev=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0) {
        rev=rev*10+n%10;
        n/=10;
    }
    if(rev==n) {
        printf("The number is a palindrome.");
    } else {
        printf("The number is not a palindrome.");
    }
    return 0;
}