//Q9.
#include <stdio.h>
int main() {
    int n,i;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<=1){
        printf("The number is not prime.");
    } 
    for(i=2; i<=n/2;i++) {
            if(n%i==0) {
                printf("The number is not prime.");
                return 0;
            }
        }
        printf("The number is prime.");
        return 0;
    }


    
