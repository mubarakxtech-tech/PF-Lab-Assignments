#include <stdio.h>
#include <ctype.h>

int main() {
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);
    
    printf("Original word: %s\n", word);
    
    // Find length without strlen()
    int length = 0;
    while (word[length] != '\0') {
        length++;
    }
    printf("Length: %d\n", length);
    
    // Reverse word
    char reversed[100];
    for (int i = 0; i < length; i++) {
        reversed[i] = word[length - 1 - i];
    }
    reversed[length] = '\0';
    printf("Reversed word: %s\n", reversed);
    
    // Palindrome check
    int is_palindrome = 1;
    for (int i = 0; i < length; i++) {
        if (word[i] != reversed[i]) {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome) printf("The word is a palindrome.\n");
    else printf("The word is NOT a palindrome.\n");
    
    // Count vowels and consonants
    int vowels = 0, consonants = 0;
    for (int i = 0; i < length; i++) {
        char ch = tolower(word[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    printf("Vowels: %d | Consonants: %d\n", vowels, consonants);
    
    return 0;
}