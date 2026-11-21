#include <stdio.h>

// Function to perform linear search
int linearSearch(int a[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, key, result;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int roll[n];

    // Reading roll numbers
    printf("Enter the roll numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &roll[i]);
    }

    printf("Enter the roll number to search: ");
    scanf("%d", &key);

    // Calling the search function
    result = linearSearch(roll, n, key);

    if (result != -1) {
        printf("Roll number %d found at position %d\n", key, result + 1);
    }
    else {
        printf("Roll number %d not found.\n", key);
    }

    return 0;
}