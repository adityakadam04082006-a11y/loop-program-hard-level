#include <stdio.h>
int main() {
    int size, i, j, minRow = 0, maxRow, minCol = 0, maxCol, num = 1;
    printf("Enter size: ");
    scanf("%d", &size);
    maxRow = size - 1;
    maxCol = size - 1;
    int dir = 0; // 0: right, 1: down, 2: left, 3: up
    int row = 0, col = 0;
    int grid[size][size];
    while (minRow <= maxRow && minCol <= maxCol) {
        if (dir == 0) {
            for (j = minCol; j <= maxCol; j++) {
                grid[row][j] = num++;
            }
            minRow++;
            dir = 1;
        } else if (dir == 1) {
            for (i = minRow; i <= maxRow; i++) {
                grid[i][maxCol] = num++;
            }
            maxCol--;
            dir = 2;
        } else if (dir == 2) {
            for (j = maxCol; j >= minCol; j--) {
                grid[maxRow][j] = num++;
            }
            maxRow--;
            dir = 3;
        } else if (dir == 3) {
            for (i = maxRow; i >= minRow; i--) {
                grid[i][minCol] = num++;
            }
            minCol++;
            dir = 0;
        }
    }
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
    return 0;
}