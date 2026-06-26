//Q107.
#include<stdio.h>
int main(){
    float basic,hra,da,total;
    printf("enter basic salary:");
    scanf("%f",&basic);
    hra=basic*0.20;
    da=basic*0.10;
    total=basic+hra+da;
    printf("\nsalary details\n");
    printf("basic salary:%.2f\n",basic);
    printf("HRA:%.2f\n",hra);
    printf("DA:%.2f\n",da);
    printf("total salary:%.2f\n",total);
    return 0;
}
