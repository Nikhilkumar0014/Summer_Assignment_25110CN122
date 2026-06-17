//Q65.
#include <stdio.h>
int main() {
    int a[]={1,2,3};
    int b[]={4,5,6};
    for (int i = 0; i < 3; i++){
        printf("%d ", a[i]);
    }
    for(int j=0;j<3;j++){
        printf("%d ", b[j]);
    }
    return 0;
}