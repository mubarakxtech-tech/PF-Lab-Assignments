#include<stdio.h>
int main() {
    int book_code,num;
    printf("Enter the book code: ");
    scanf("%d", &book_code);
    num = book_code;
    int rev = 0;
    while(num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    if(rev==book_code) {
        printf("The book code is valid.\n");
    } else {
        printf("The book code is invalid.\n");
    }
    return 0;
} 