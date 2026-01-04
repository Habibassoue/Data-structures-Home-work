#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {0, 0, 3},
        {4, 0, 0},
        {0, 5, 0}
    };

    printf("Row Col Value\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] != 0)
                printf("%d   %d   %d\n", i, j, matrix[i][j]);
        }
    }
    return 0;
}
