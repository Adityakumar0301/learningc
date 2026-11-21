#include <stdio.h>
int main() {
    int n, key, low, high, mid, pos = -1;
    printf("Enter number of employees: ");
    scanf("%d", &n);
     int id[n];
    printf("Enter employee IDs in ascending order:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &id[i]);
    printf("Enter employee ID to search: ");
    scanf("%d", &key);
     low = 0;
  high = n - 1;
 while (low <= high) {
 mid = (low + high) / 2;
 if (id[mid] == key) {
 pos = mid;
 break;
 }
 else if (key < id[mid])
 high = mid - 1;
 else
 low = mid + 1;
 }
 if (pos != -1)
 printf("Employee ID found at position %d\n", pos + 1);
 else
 printf("Employee ID not found\n");
 return 0;
}
