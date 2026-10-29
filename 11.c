#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the number of rows (m) and columns (n):\n");
    scanf("%d %d", &m, &n);

    int arr[m][n];

    printf("Enter the elements of the matrix:\n");

    // Input matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Display matrix
    printf("The matrix is:\n");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}