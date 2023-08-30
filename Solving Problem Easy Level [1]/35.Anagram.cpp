#include <stdio.h>
#include <string.h>

#define MAX_CHARS 256

// Function to check if two strings are anagrams
int areAnagrams(char str1[], char str2[]) {
    int count1[MAX_CHARS] = {0};
    int count2[MAX_CHARS] = {0};

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return 0; // Lengths are not equal, so they can't be anagrams
    }

    // Count the frequency of characters in both strings
    for (int i = 0; i < len1; i++) {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }

    // Compare the character frequencies
    for (int i = 0; i < MAX_CHARS; i++) {
        if (count1[i] != count2[i]) {
            return 0; // Frequencies of characters are not equal, so they can't be anagrams
        }
    }

    return 1; // Both strings are anagrams
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
    } else {
        printf("\"%s\" and \"%s\" are not anagrams.\n", str1, str2);
    }

    return 0;
}

