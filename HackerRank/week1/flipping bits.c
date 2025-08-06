#include <stdio.h>

unsigned int flipBits(unsigned int number) {
    return ~number & 0xFFFFFFFF;
}

int main() {
    int queryCount;
    scanf("%d", &queryCount);  

    for (int i = 0; i < queryCount; i++) {
        unsigned int inputNumber;
        scanf("%u", &inputNumber);  

        unsigned int flippedResult = flipBits(inputNumber);
        printf("%u\n", flippedResult);  
    }

    return 0;
}
