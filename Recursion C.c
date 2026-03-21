#include <stdio.h>

int binarySearch(int arr[], int target, int low, int high) {
    if (low > high) {
        return -1; 
    }
    
    int mid = low + (high - low) / 2; 
    
    if (arr[mid] == target) {
        return mid; 
    } else if (arr[mid] > target) {
        return binarySearch(arr, target, low, mid - 1); 
    } else {
        return binarySearch(arr, target, mid + 1, high);
    }
}

int main () {
    int arr[] = {1, 4, 27, 32, 45, 56, 78, 89, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int searchElement;

    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    int result = binarySearch(arr, searchElement, 0, n - 1);
    if (result != -1) {
        printf("Element %d found at index: %d\n", searchElement, result);
    } else {
        printf("Element %d not found\n", searchElement);
    }
    return 0;
}