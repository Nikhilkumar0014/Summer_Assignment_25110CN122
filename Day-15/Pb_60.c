//Q60.
#include<stdio.h>
int main(){
    int n,i,j,temp;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==0){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
      printf("%d ",a[i]);
    return 0;
}