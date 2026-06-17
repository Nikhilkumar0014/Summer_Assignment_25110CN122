//Q68.
#include<stdio.h>
int main(){
    int a[]={1,2,3,4};
    int b[]={2,4,6,8};
    for (int i = 0; i < 4; i++){
        for(int j=0;j<4;j++){
            if(a[i]==b[j])
                printf("%d ", a[i]);
            
        }
    }
    return 0;
}