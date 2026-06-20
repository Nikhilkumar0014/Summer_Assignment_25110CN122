//Q79.
#include <stdio.h>
int main(){
    int a[10][10],r,c,i,j,sum;
    printf("enter order of matrix:\n");
    scanf("%d%d",&r,&c);
    printf("enter matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    printf("sum of each row is:\n");
    for(i=0;i<r;i++){
        sum=0;
        for(j=0;j<c;j++){
            sum+=a[i][j];
        }
        printf("sum of row %d is %d\n",i+1,sum);
    }
    return 0;
}

