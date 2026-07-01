//Q69.
#include<stdio.h>
int main(){
    int a[5],i,j,temp;
    printf("enter 5 numbers:");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5; i++){
        for(int j=0;j<4-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("the sorted array is:");
    for(i=0;i<5;i++){
        printf("%d ", a[i]);
    }
    return 0;
}
