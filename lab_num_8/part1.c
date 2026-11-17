#include<stdio.h>
int sumdigits(int n) {
    if (n < 0) n = -n;              /* handle negatives */
    if (n < 10) return n;           /* base case: single digit */
    return (n % 10) + sumdigits(n / 10);   /* last digit + sum of the rest */
}
int calculateChecksum(int transactionID) {
    if (transactionID < 0) transactionID = -transactionID;
    if (transactionID < 10) return transactionID; 
    return (transactionID % 10) + calculateChecksum(transactionID / 10);
}
int main()
{
    int transactionID;
    printf("Enter a transaction ID: ");
    scanf("%d", &transactionID);
    printf("Checksum of transaction ID: %d\n", calculateChecksum(transactionID));
    return 0;
}