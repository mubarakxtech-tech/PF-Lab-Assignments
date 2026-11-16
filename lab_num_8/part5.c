#include <stdio.h>

#define N 5

struct Item {
    int   id;
    char  name[50];
    int   quantity;
    float unitPrice;
};
typedef struct Item Item;

int main(void) {
    Item items[N];
    float totalValue = 0.0f;

    for (int i = 0; i < N; i++) {
        printf("\nItem %d\n", i + 1);
        printf("  ID: ");         scanf("%d",   &items[i].id);
        printf("  Name: ");       scanf("%49s",  items[i].name);
        printf("  Quantity: ");   scanf("%d",   &items[i].quantity);
        printf("  Unit price: "); scanf("%f",   &items[i].unitPrice);
        totalValue += items[i].quantity * items[i].unitPrice;
    }
    printf("\nTotal inventory value: %.2f\n", totalValue);

    int searchId, found = 0;
    printf("Enter Item ID to search: ");
    scanf("%d", &searchId);
    for (int i = 0; i < N; i++) {
        if (items[i].id == searchId) {
            printf("Found -> ID: %d, Name: %s, Qty: %d, Unit Price: %.2f\n",
                   items[i].id, items[i].name, items[i].quantity, items[i].unitPrice);
            found = 1;
            break;
        }
    }
    if (!found) printf("Item with ID %d not found.\n", searchId);
    return 0;
}