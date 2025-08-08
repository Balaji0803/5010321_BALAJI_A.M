#include <stdio.h>
#include <stdlib.h>

int main() {
    int dimension;
    scanf("%d", &dimension);

    int matrix[100][100]; 
    int sum_main_diag = 0, sum_anti_diag = 0;

    
    for (int row = 0; row < dimension; row++) {
        for (int col = 0; col < dimension; col++) {
            scanf("%d", &matrix[row][col]);

            if (row == col) {
                sum_main_diag += matrix[row][col];
            }
            if (row + col == dimension - 1) {
                sum_anti_diag += matrix[row][col];
            }
        }
    }

    int difference = sum_main_diag - sum_anti_diag;
    if (difference < 0) {
        difference = -difference; 
    }

    printf("%d\n", difference);
    return 0;
}
