#include <stdio.h>

int main() {
    long long num;
    int even_count = 0, odd_count = 0, digit;
    
    printf("Enter an electricity meter reading number: ");
    scanf("%lld", &num);
    
    if (num == 0) {
        even_count = 1;
    } else {
        if (num < 0) num = -num;
        while (num > 0) {
            digit = num % 10;
            if (digit % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
            num /= 10;
        }
    }
    
    printf("Even digits count: %d\n", even_count);
    printf("Odd digits count: %d\n", odd_count);
    return 0;
}