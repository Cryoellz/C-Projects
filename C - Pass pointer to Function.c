#include <stdio.h>

int main() {
    //INT DATA TYPE
    int score = 76;
    int* scorePointer = &score;

    //DOUBLE DATA TYPE
    double percentage = 67.76;
    double* percentagePointer = &percentage;

    //CHARACTER DATA TYPE
    char letter = 'B';
    char* letterPointer = &letter;

    printf("The score is: %d and its address is: %p\n", score, scorePointer);
    printf("The percentage is: %.2lf and its address is: %p\n", percentage, percentagePointer);
    printf("The letter is: %c and its address is: %p\n", letter, letterPointer);


    return 0;
}