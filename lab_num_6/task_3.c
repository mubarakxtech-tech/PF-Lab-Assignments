#include <stdio.h>
 
int main(void)
{
    int image[3][3];
    int (*ptr)[3] = image;   // pointer to an array of 3 ints (one row)
 
    printf("Enter 9 pixel values:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // *(ptr + i)       -> row i (an int[3], decays to int*)
            // *(ptr + i) + j   -> address of element [i][j]
            scanf("%d", *(ptr + i) + j);
        }
    }
 
    // Increase brightness: multiply every pixel by 2
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            *(*(ptr + i) + j) *= 2;
 
    printf("\nUpdated image:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%4d", *(*(ptr + i) + j));
        printf("\n");
    }
    return 0;
}