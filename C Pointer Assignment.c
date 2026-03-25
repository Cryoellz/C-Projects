#include <stdio.h>

int main () {   
    int score1 = 10;
    int score2 = 20;

    int* scorePointer1;
    int* scorePointer2;

    scorePointer1 = &score1;
    scorePointer2 = &score2;

    *scorePointer1 = *scorePointer2;

    printf("%d %d\n", *scorePointer1, *scorePointer2);

    return 0;
}