//Q42.
#include<stdio.h>
int max(int a,int b){
    if(a>b)
      return a;
    else
      return b;
}
int main(){
    int a,b;
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    printf("maximum=%d",max(a,b));
    return 0;
}