#include <stdio.h>
#include <string.h>

int main() {
    int totalWords, totalChecks;
    scanf("%d", &totalWords);

    char wordList[1000][100];
    for (int i = 0; i < totalWords; i++) {
        scanf("%s", wordList[i]);
    }

    scanf("%d", &totalChecks);
    char checkList[1000][100];
    for (int i = 0; i < totalChecks; i++) {
        scanf("%s", checkList[i]);
    }

    for (int i = 0; i < totalChecks; i++) {
        int count = 0;
        for (int j = 0; j < totalWords; j++) {
            if (strcmp(checkList[i], wordList[j]) == 0) {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
