//Q76.
#include<stdio.h>
int main(){
    int a[3][3];
    int i,j,sum=0;
    printf("enter matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    printf("diagonal elements are:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            if(i==j){
                printf("%d ",a[i][j]);
                sum+=a[i][j];
            }
        }
    }
    printf("\nsum of diagonal elements is: %d",sum);
    return 0;
}
