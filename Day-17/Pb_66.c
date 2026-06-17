//Q66.
#include<stdio.h>
int main(){
    int a[]={1,2,3};
    int b[]={3,4,5};
    int i,j;
    for (int i = 0; i < 3; i++){
        printf("%d ", a[i]);
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(b[i]==a[j])
                break;
        }
        if(j==3)
           printf("%d ", b[i]);
    }
    return 0;
}