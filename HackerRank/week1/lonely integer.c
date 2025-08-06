#include <stdio.h>

int findUniqueElement(int numbers[], int size) {
    int unique = 0;
    for (int index = 0; index < size; index++) {
        unique ^= numbers[index];  
    }
    return unique;
}

int main() {
    int count;
    scanf("%d", &count);  

    int elements[count];
    for (int i = 0; i < count; i++) {
        scanf("%d", &elements[i]);  
    }

    int result = findUniqueElement(elements, count);
    printf("%d\n", result);  

    return 0;
}
