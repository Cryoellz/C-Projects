#include <stdio.h>

int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

double calculateAverage(int arr[], int size) {
    int sum = calculateSum(arr, size);
    return sum / (double)size;
}

int main() { 
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("The sum of the array elements is: %d\n", calculateSum(arr, size));
    printf("The average of the array elements is: %.2lf\n", calculateAverage(arr, size));

    return 0;
}