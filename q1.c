// Write a C program using functions to perform the following tasks:
// (a) Write a recursive function gcd(a, b) that returns the Greatest Common Divisor of two integers using Euclid’s algorithm.
// (b) Write a recursive function power(x, n) that computes x^n using the fast exponentiation method (divide the exponent by 2 at each step) in O(log n) time.
// (c) Write a function sortArray(arr, n, compare) that sorts an integer array using bubble sort. The function must accept a function pointer compare so that the same function can sort the array in either ascending or descending order. Define two comparison functions, ascending() and descending(), for this purpose.
// (d) Write a function findMinMax(arr, n, &min, &max) that finds the smallest and largest elements of an array and returns both values to the caller using pointer parameters.
// (e) Write a main() function that tests all of the above using these inputs:
// GCD of 48 and 18
// 2^10 and 3^5
// Array: {64, 25, 12, 22, 11, 90}. Display its min and max, then print it sorted in ascending and then descending order.


#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long power(long long x, int n) {
    if (n == 0)
        return 1;
    long long half = power(x, n / 2);
    if (n % 2 == 0)
        return half * half;
    return half * half * x;
}

int ascending(int a, int b)  { return a > b; }
int descending(int a, int b) { return a < b; }


void sortArray(int arr[], int n, int (*compare)(int, int)) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (compare(arr[j], arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void findMinMax(int arr[], int n, int *min, int *max) {
    *min = *max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < *min) *min = arr[i];
        if (arr[i] > *max) *max = arr[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    
    printf("GCD(48, 18) = %d\n", gcd(48, 18));

  
    printf("2^10 = %lld\n", power(2, 10));
    printf("3^5  = %lld\n", power(3, 5));

    
    int arr[] = {64, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    printf("\nOriginal array:   ");
    printArray(arr, n);

    findMinMax(arr, n, &min, &max);
    printf("Min = %d, Max = %d\n", min, max);

    sortArray(arr, n, ascending);
    printf("Sorted ascending: ");
    printArray(arr, n);

    sortArray(arr, n, descending);
    printf("Sorted descending: ");
    printArray(arr, n);

    return 0;
}