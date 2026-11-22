#include <stdio.h>

void bubbleSort(int a[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {

            if (a[j] < a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter marks:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    bubbleSort(a, n);

    printf("Marks in descending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\nHighest marks = %d", a[0]);
    printf("\nLowest marks = %d", a[n - 1]);

    return 0;
}