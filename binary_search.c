#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key;
    int low = 0;
    int high = 4;
    int mid;
    int found = 0;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Repeat while there are elements to search
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element found at position %d\n", mid + 1);
            found = 1;
            break;
        } else if (key > arr[mid]) {
            // Search the right half
            low = mid + 1;
        } else {
            // Search the left half
            high = mid - 1;
        }
    }

    if (found == 0) {
        printf("Element not found\n");
    }

    return 0;
}
