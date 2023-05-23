#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int cof;
struct items
{
    char item[30];
    int qty;
};
struct items s;
void payment();
void order()
{
    int i, n;
    printf("\n\nHow many item you want to order?\n\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fgetc(stdin);
        printf("Enter food item name: ");
        fgets(s.item, 30, stdin);
        printf("\n\nEnter quantity: ");
        scanf("%d", &s.qty);
    }
}
void payment()
{
    if (s.item == "Coffee")
    {
        cof = 12 * s.qty;
    }
    else
    {
        printf("Food item is not matched!\n");
    }
}
void main()
{
    int choice;
    printf("Coffee-Rs.12\n\n");
    while (choice != 4)
    {

        printf("\n1.Order\n2.Bill\n3.Exit\nEnter your choice:\t");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            order();
            break;
        case 2:
            payment();
            printf("YOUR BILL: Rs.%d", cof);
            break;
        case 3:
            printf("\nThank you!\n");
            exit(0);
        default:
            printf("Wrong!");
        }
    }
}