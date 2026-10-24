#include <stdio.h>

int main() {
    int n, target;
    int nums[100];
    int found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 2 || n > 100) {
        printf("Invalid array size\n");
        return 0;
    }

    printf("Enter array elements:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (nums[i] + nums[j] == target) {
                printf("Indices: [%d, %d]\n", i, j);
                found = 1;
                break;
            }
        }

        if (found) {
            break;
        }
    }

    if (!found) {
        printf("No solution found\n");
    }

    return 0;
}
