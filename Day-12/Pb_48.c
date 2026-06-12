//Q48.
#include<stdio.h>
int isPerfect(int n){
    int sum =0;
    for(int i=2;i<=n;i++){
        if (n%i==0)
         sum+=i;
    }
    return(sum==n);
}
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(isPerfect(num))
        printf("perfect number\n");
    else
        printf("not perfect number\n");
        return 0;
}

