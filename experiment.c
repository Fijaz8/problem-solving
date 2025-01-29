#include <stdio.h>
#include <string.h>

#define MAX_VAL 1000  // Maximum possible value for array elements

int main() {
    int n, queries, num;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n], hash[MAX_VAL + 1] = {0};

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        hash[arr[i]]++;  // Pre-storing step
    }
     printf("Hash Map (element: frequency):\n");
    for (int i = 0; i <= MAX_VAL; i++) {
        if (hash[i] > 0) {
            printf("%d: %d\n", i, hash[i]);
        }
    }

    // printf("Enter the number of queries: ");
    // scanf("%d", &queries);

    // for (int i = 0; i < queries; i++) {
    //     printf("Enter the query element: ");
    //     scanf("%d", &num);
    //     if (num >= 0 && num <= MAX_VAL) {
    //         printf("Frequency of %d: %d\n", num, hash[num]);
    //     } else {
    //         printf("Invalid query: %d\n", num);
    //     }
    // }

    return 0;
}
