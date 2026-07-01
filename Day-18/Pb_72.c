//Q72.
#include <stdio.h>
int main(){
    int a[5],i,j,temp;
    printf("enter 5 numbers:");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < 4; i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Descending order:");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}