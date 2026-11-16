#include<stdio.h>
int sumDigits(int n) {
    if (n < 0) n = -n;              /* handle negatives */
    if (n < 10) return n;           /* base case: single digit */
    return (n % 10) + sumDigits(n / 10);   /* last digit + sum of the rest */
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits: %d\n", sumDigits(num));
    return 0;
}