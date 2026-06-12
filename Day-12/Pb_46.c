//Q46.
#include<stdio.h>
#include<math.h>
int isArmstrong(int n){
    int temp=n,digits=0;
    int sum=0;
    while(temp>0){
        digits++;
        temp/=10;
    }
    return(sum==n);
}
int main(){
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    if(isArmstrong(num))
        printf("Armstrong Number\n");
    else
        printf("not Armstrong\n");
    return 0;
}