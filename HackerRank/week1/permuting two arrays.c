#include <stdio.h>
#include <stdlib.h>

int compareAsc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int compareDesc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);

    while (test_cases--) {
        int size, min_sum;
        scanf("%d %d", &size, &min_sum);

        int first[size], second[size];

        for (int i = 0; i < size; i++) {
            scanf("%d", &first[i]);
        }
        for (int i = 0; i < size; i++) {
            scanf("%d", &second[i]);
        }

        qsort(first, size, sizeof(int), compareAsc);
        qsort(second, size, sizeof(int), compareDesc);

        int is_possible = 1; 
        for (int i = 0; i < size; i++) {
            if (first[i] + second[i] < min_sum) {
                is_possible = 0;
                break;
            }
        }

        if (is_possible) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
