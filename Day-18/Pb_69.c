//Q69.
#include<stdio.h>
int main(){
    int a[]={5,2,4,1,3};
    int i,j,temp;
    for (int i = 0; i < 5; i++){
        for(int j=0;j<4-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%d ", a[i]);
    }
    return 0;
}
