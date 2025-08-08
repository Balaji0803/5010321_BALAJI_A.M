#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define ALPHABET_COUNT 26

int main() {
    char input_line[1000];
    
    fgets(input_line, sizeof(input_line), stdin);

    int letter_seen[ALPHABET_COUNT] = {0};
    int unique_count = 0;

    for (int pos = 0; input_line[pos] != '\0'; pos++) {
        char ch = tolower(input_line[pos]);
        if (ch >= 'a' && ch <= 'z') {
            int idx = ch - 'a';
            if (!letter_seen[idx]) {
                letter_seen[idx] = 1;
                unique_count++;
            }
        }
    }

    if (unique_count == ALPHABET_COUNT) {
        printf("pangram\n");
    } else {
        printf("not pangram\n");
    }

    return 0;
}
