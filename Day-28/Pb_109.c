//Q109.
#include<stdio.h>
#include<stdio.h>
struct Book
{
    int id;
    char name[50];
};
int main()
{
    struct Book b[10];
    int n,i;
    printf("enter number of books:");
    scanf("%d",&n);
    for(i=0;i<n;i++);
    {
        printf("\nenter book id:");
        scanf("%d",&b[i].id);
        printf("enter book name:");
        scanf(" %[^\n]",b[i].name);

    }
    printf("\nlibrary records\n");
    for(i=0;i<n;i++)
    {
        printf("BOOK ID:%d\n",b[i].id);
        printf("Book name:%s\n",b[i].name);
    }
    return 0;
}