//Q45.
#include<stdio.h>
int isPalindrome(int n){
    int temp=n,rev=0;
    while(temp>0){
        rev=rev*10+temp%10;
        temp/=10;
    }
    return(rev==n);
}
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(isPalindrome(num))
       printf("palindrome\n");
    else
       printf("not palindrome\n");
    return 0;
}








































































































