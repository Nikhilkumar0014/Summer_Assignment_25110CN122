//Q72.
#include <stdio.h>
int main(){
    int a[5]={5,2,4,1,3};
    int i,j,temp;
    for (int i = 0; i < 5; i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}