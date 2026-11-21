#include <stdio.h>
int binarySearch(int id[], int n, int key) {
 int low = 0, high = n - 1, mid;
 while (low <= high) {
 mid = (low + high) / 2;
 if (id[mid] == key)
 return mid;
 else if (key < id[mid])
 high = mid - 1;
 else
 low = mid + 1;
 }
 return -1;
}
int main() {
 int n, key, result;
 printf("Enter number of employees: ");
 scanf("%d", &n);
 int id[n];
 printf("Enter employee IDs in ascending order:\n");
 for (int i = 0; i < n; i++)
 scanf("%d", &id[i]);
 printf("Enter employee ID to search: ");
 scanf("%d", &key);
 result = binarySearch(id, n, key);
 if (result != -1)
 printf("Employee ID found at position %d\n", result + 1);
 else
 printf("Employee ID not found\\n");
 return 0;
}
