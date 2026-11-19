#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            result = mid;      
            high = mid - 1;    
        } else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
    int arr[] = {1, 2, 8, 10, 11, 12, 19};
    int x = 5;
    int n = sizeof(arr) / sizeof(arr[0]);

    int index = findCeil(arr, n, x);
    printf("%d", index);

    return 0;
}
