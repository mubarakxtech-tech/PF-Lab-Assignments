#include <stdio.h>

struct Product {
    int   id;
    char  name[50];
    char  category[30];
    float price;
    int   stock;
};
typedef struct Product Product;

void displayProductDetails(Product p) {
    float discount   = p.price * 0.05f;
    float finalPrice = p.price - discount;
    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Category: %s\n", p.category);
    printf("Original Price: %.2f\n", p.price);
    printf("Final Price (5%% off): %.2f\n", finalPrice);
    printf("Stock: %d\n\n", p.stock);
}

int main(void) {
    Product p1 = {101, "Wireless Mouse", "Electronics", 2500.0f, 40};
    Product p2 = {102, "Notebook A4",    "Stationery",   350.0f, 200};
    displayProductDetails(p1);
    displayProductDetails(p2);
    return 0;
}