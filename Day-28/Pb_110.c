//Q110.
#include<stdio.h>
int main()
{
    int acc;
    float balance,deposit,withdraw;
    printf("enter account number: ");
    scanf("%d", &acc);
    printf("enter initial balance:");
    scanf("%f",&balance);
    printf("enter deposit amount:");
    scanf("%f",&deposit);
    balance+=deposit;
    printf("enter withdraw amount:");
    scanf("%f",&withdraw);
    if(withdraw<=balance)
         balance-=withdraw;
    else 
        printf("insufficient balance\n");
    printf("final balance=%.2f",balance);
    return 0;

}
