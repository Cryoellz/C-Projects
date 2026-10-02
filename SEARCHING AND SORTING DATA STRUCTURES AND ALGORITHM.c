#include <stdio.h>

void enterNumbers(int arr[], int *number);
void displayNumbers(int arr[], int number);
void bubbleSort(int arr[], int number);
void selectionSort(int arr[], int number);
void linearSearch(int arr[], int number);
void binarySearch(int arr[], int number);

int main () {
    int arr[100]; 
    int choice = 0;
    int number = 0;    

    do {
        printf("\nSearching and sorting\n");
        printf("1. Enter numbers\n");
        printf("2. Display Numbers\n");
        printf("3. Bubble sort\n");
        printf("4. Selection Sort\n");
        printf("5. Linear Search\n");
        printf("6. Binary Search\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        if(scanf("%d", &choice) != 1){
            printf("Invalid Choice\n");
            while (getchar() != '\n'); 
            continue;
        }
        
        switch (choice){
            case 1:
                printf("1. Enter Numbers\n");
                enterNumbers(arr, &number);
                break;

            case 2:
                printf("2. Display Numbers\n");
                displayNumbers(arr, number);
                break;

            case 3:
                printf("3. Bubble Sort\n");
                bubbleSort(arr, number);
                break;

            case 4:
                printf("4. Selection Sort\n");
                selectionSort(arr, number); 
                break;

            case 5:
                printf("5. Linear Search\n");
                linearSearch(arr, number);
                break;

            case 6:
                printf("6. Binary Search\n");
                binarySearch(arr, number);
                break;

            case 7:
                printf("Thank you, Goodbye!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }
    } while (choice != 7);

    return 0;
}

void enterNumbers(int arr[], int *number) {
    do {
        printf("How many numbers you want to enter? (minimum of 10)\n ");
        scanf("%d", number);
        if (*number < 10) {
            printf("Requirement not met: Please enter at least 10.\n");
        }
    } while (*number < 10);

    printf("Enter %d Elements:\n", *number);
    for(int i = 0; i < *number; i++){
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void displayNumbers(int arr[], int number){
    if (number == 0){
        printf("The list is empty. Try inputting elements first.\n");
        return;
    }
    printf("\n=== CURRENT ELEMENTS IN THE ARRAY ===\n");
    for (int i = 0; i < number; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int number) {
    if (number == 0) {
        printf("The list is empty \n");
        return;
    }
    
    for (int i = 0; i < number - 1; i++) {
        for (int j = 0; j < number - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("List Successfully Sorted via Bubble Sort.\n");
}

void selectionSort(int arr[], int number) {
    if (number == 0) {
        printf("The list is empty \n");
        return;
    }
    
    for (int i = 0; i < number - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < number; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    printf("List Successfully Sorted via Selection Sort.\n");
}

void linearSearch(int arr[], int number) {
    if (number == 0){
        printf("The list is empty.\n");
        return;
    }
    int target, found = 0;
    printf("Enter the number to search: ");
    scanf("%d", &target);

    for (int i = 0; i < number; i++){
        if (arr[i] == target) {
            printf("Value %d FOUND at index %d.\n", target, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Value %d NOT FOUND in the list.\n", target);
    }
}

void binarySearch(int arr[], int number) {
    if (number == 0) {
        printf("The list is empty.\n");
        return;
    }

    int target, left = 0, right = number - 1, found = 0;
    printf("Enter the number to search for (Array must be sorted first): ");
    scanf("%d", &target);

    while (left <= right){
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            printf("Value %d FOUND at index %d.\n", target, mid + 1);
            found = 1;
            break;
        }

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (!found) {
        printf("Value %d NOT FOUND in the array.\n", target);
    }
}