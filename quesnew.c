
#include <stdio.h>

int main() {

    int n, k;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &k);

    int maxLength = 0;

    for(int i = 0; i < n; i++) {

        int sum = 0;

        for(int j = i; j < n; j++) {

            sum += arr[j];

            if(sum == k) {

                int length = j - i + 1;

                if(length > maxLength) {
                    maxLength = length;
                }
            }
        }
    }

    printf("Longest subarray length = %d", maxLength);

    return 0;
}
