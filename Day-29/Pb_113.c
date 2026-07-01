//Q113.
#include <stdio.h>
int main()
{
    int ch;
    float a,b;
    printf("Enter your choice:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d", &ch);
    printf("Enter the two numbers: ");
    scanf("%f %f",&a,&b);
    switch(ch)
    {
        case 1:
            printf("Addition of two numbers: %f",a+b);
            break;
        case 2:
            printf("Subtraction of two numbers: %f",a-b);
            break;
        case 3:
            printf("Multiplication of two numbers: %f",a*b);
            break;
        case 4:
            printf("Division of two numbers: %f",a/b);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}