#include <stdio.h>
#include <string.h>

int main() {
    char word_grid[3][100];

    printf("Enter 3 rows of text (3 space-separated words per row):\n");
    for (int i = 0; i < 3; i++) {
        printf("Row %d: ", i + 1);
        scanf(" %[^\n]", word_grid[i]);
    }

    char max_word[50] = "";
    int max_length = 0;
    int max_row = -1, max_col = -1;

    for (int i = 0; i < 3; i++) {
        char w1[30], w2[30], w3[30];
        sscanf(word_grid[i], "%s %s %s", w1, w2, w3);

        char* row_words[3] = {w1, w2, w3};
        for (int j = 0; j < 3; j++) {
            int len = strlen(row_words[j]);
            if (len > max_length) {
                max_length = len;
                strcpy(max_word, row_words[j]);
                max_row = i;
                max_col = j;
            }
        }
    }

    printf("\n--- Result ---\n");
    printf("Longest Word : \"%s\"\n", max_word);
    printf("Length       : %d\n", max_length);
    printf("Position     : Row Index %d, Column Index %d\n", max_row, max_col);

    return 0;
}