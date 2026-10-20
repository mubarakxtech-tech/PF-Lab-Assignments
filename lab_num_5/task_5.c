#include <stdio.h>
#include <ctype.h>

int main() {
    char sentences[3][100];

    printf("Enter a paragraph with 3 semicolon-separated sentences:\n");
    printf("Example: Learn C programming; Nested loops are powerful; Practice daily\n\nInput: ");

    for (int i = 0; i < 3; i++) {
        scanf(" %99[^;]%*c", sentences[i]);
    }

    printf("\n--- Vowel Count Analysis ---\n");
    for (int i = 0; i < 3; i++) {
        int vowels = 0;
        for (int j = 0; sentences[i][j] != '\0'; j++) {
            char ch = tolower(sentences[i][j]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            }
        }
        printf("Sentence %d: \"%s\"\n", i + 1, sentences[i]);
        printf("Vowel Count: %d\n\n", vowels);
    }

    return 0;
}