#include <stdio.h>

void minMaxSum(int arr[], int size) {
    long long total = 0;
    int minimum = arr[0], maximum = arr[0];

    for (int i = 0; i < size; i++) {
        total += arr[i];
        if (arr[i] < minimum)
            minimum = arr[i];
        if (arr[i] > maximum)
            maximum = arr[i];
    }

    printf("%lld %lld\n", total - maximum, total - minimum);
}

int main() {
    int numbers[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    minMaxSum(numbers, 5);

    return 0;
}
