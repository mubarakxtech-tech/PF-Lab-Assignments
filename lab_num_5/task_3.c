#include <stdio.h>

int main() {
    char secret_messages[3][100];

    printf("Enter 3 secret messages (Uppercase letters and spaces ONLY):\n");
    for (int i = 0; i < 3; i++) {
        printf("Message %d: ", i + 1);
        scanf(" %[A-Z ]", secret_messages[i]);
        
        // Clear remaining invalid characters from input buffer
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\n--- Message Analysis ---\n");
    for (int i = 0; i < 3; i++) {
        int spaces = 0;
        int word_count = 0;
        int in_word = 0;

        for (int j = 0; secret_messages[i][j] != '\0'; j++) {
            if (secret_messages[i][j] == ' ') {
                spaces++;
                in_word = 0;
            } else if (!in_word) {
                in_word = 1;
                word_count++;
            }
        }

        printf("Message %d: \"%s\"\n", i + 1, secret_messages[i]);
        printf("  Total Spaces: %d | Word Count: %d\n", spaces, word_count);
    }

    return 0;
}