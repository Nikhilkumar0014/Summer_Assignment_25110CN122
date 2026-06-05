//Q20.
#include<stdio.h>
int main(){
    int n,largest=0;
    printf("enter the number : ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(n%i==0){
                largest=i;
                n=n/i;
        }
    }
    printf("the largest prime factor of %d is %d",n,largest);
    return 0;
}