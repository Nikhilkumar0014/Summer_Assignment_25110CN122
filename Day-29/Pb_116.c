//Q116.
#include <stdio.h>
int main()
{
    char name[50];
    int qty;
    float price;
    printf("Enter product name: ");
    scanf("%s", name);
    printf("Enter quantity: ");
    scanf("%d", &qty);
    printf("Enter price: ");
    scanf("%f", &price);
    printf("\ninventory details\n");
    printf("product name: %s\n", name);
    printf("quantity: %d\n", qty);
    printf("price: %.2f\n", price);
    return 0;
}