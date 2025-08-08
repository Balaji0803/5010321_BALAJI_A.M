#include <stdio.h>

#define RANGE 100

int main() {
    int total_count;
    scanf("%d", &total_count);

    int freq[RANGE] = {0}; 

    
    for (int idx = 0; idx < total_count; idx++) {
        int current_value;
        scanf("%d", &current_value);
        if (current_value >= 0 && current_value < RANGE) {
            freq[current_value]++;
        }
    }
    
    for (int i = 0; i < RANGE; i++) {
        printf("%d", freq[i]);
        if (i != RANGE - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
