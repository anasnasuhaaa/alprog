#include <stdio.h>

#define ROWS 4
#define COLS 4

void printSpiral(int arr[ROWS][COLS]) {
    int top = 0, bottom = ROWS - 1;
    int left = 0, right = COLS - 1;

    while (top <= bottom && left <= right) {
        // 1. Print Top Row (Left to Right)
        for (int i = left; i <= right; i++) {
            printf("%d ", arr[top][i]);
        }
        top++;

        // 2. Print Right Column (Top to Bottom)
        for (int i = top; i <= bottom; i++) {
            printf("%d ", arr[i][right]);
        }
        right--;

        // 3. Print Bottom Row (Right to Left)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%d ", arr[bottom][i]);
            }
            bottom--;
        }

        // 4. Print Left Column (Bottom to Top)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", arr[i][left]);
            }
            left++;
        }
    }
}

int main() {
    int array[ROWS][COLS] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16}
    };

    printf("Clockwise Spiral Traversal:\n");
    printSpiral(array);
    printf("\n");

    return 0;
}
