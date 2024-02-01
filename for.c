#include <stdio.h>

int main() {
    int number;
    printf("enter any number\n");
    scanf("%d", &number);

    for(int index = 1; index <= number; index ++) {
        printf(" %d ", index);
    }
    printf("\n");

    return 0;
}

