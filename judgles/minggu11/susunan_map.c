#include <stdio.h>
#include <stdlib.h>

int lower_bound(int *arr, int size, int target) {
    int left = 0;
    int right = size;

    while (left < right) {
        int mid = (left + right) / 2;

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left;
}

int main() {
    int N;
    scanf("%d", &N);

    int *A = (int *) malloc(N * sizeof(int));
    int *lis = (int *) malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int len = 0;

    for (int i = 0; i < N; i++) {
        int pos = lower_bound(lis, len, A[i]);
        lis[pos] = A[i];

        if (pos == len) {
            len++;
        }
    }

    printf("%d\n", N - len);

    free(A);
    free(lis);

    return 0;
}