#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[100];
    int vowels = 0, consonants = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    // Remove the newline character from the end of the input
    sentence[strcspn(sentence, "\n")] = '\0';

    for (int i = 0; sentence[i] != '\0'; i++) {
        char c = tolower(sentence[i]);
        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}

