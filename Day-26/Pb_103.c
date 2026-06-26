//Q103.
#include<stdio.h>
int main()
{
    int balance=5000,amount,choice;
    printf("check balance\n");
    printf("money withdrawl\n");
    printf("enter choice:");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("balannce=%d",balance);
    }
    else if(choice==2)
    {
        printf("enter amount:");
        scanf("%d",&amount);
        if(amount<= balance)
        {


            balance=balance-amount;
            printf("remaining balance=%d",balance);
        }
        else
        { 
            printf("insufficient balance");
        }
        
   }
   else
   {
    printf("invalid choice");

   }
   return 0;

}
