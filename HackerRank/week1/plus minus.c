#include <stdio.h>

void plusMinus(int arr[], int n) {
    int positive = 0, negative = 0, neutral = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            neutral++;
    }

    printf("%.6f\n", (float)positive / n);
    printf("%.6f\n", (float)negative / n);
    printf("%.6f\n", (float)neutral / n);
}

int main() {
    int n;
    scanf("%d", &n);  // Read size of array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read array elements
    }

    plusMinus(arr, n);  // Call function

    return 0;
}
