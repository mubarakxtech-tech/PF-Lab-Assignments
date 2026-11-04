#include <stdio.h>
 
int add(int a, int b);
int multiply(int a, int b);
int findMax(int a, int b);
int compute(int a, int b, int (*op)(int, int));
 
int main(void)
{
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
 
    int sum     = compute(x, y, add);        // function name = its address
    int product = compute(x, y, multiply);
    int maximum = compute(x, y, findMax);
 
    printf("Sum     : %d\n", sum);
    printf("Product : %d\n", product);
    printf("Maximum : %d\n", maximum);
    return 0;
}
 
int add(int a, int b)      { return a + b; }
int multiply(int a, int b) { return a * b; }
int findMax(int a, int b)  { return (a > b) ? a : b; }
 
// Master function: runs whichever operation it is handed
int compute(int a, int b, int (*op)(int, int))
{
    return op(a, b);
}