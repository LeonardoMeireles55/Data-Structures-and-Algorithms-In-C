#include <stdio.h>

int main() {
    int number;
    printf("enter any number\n");
    scanf("%d", &number);

    for(int index = 1; index <= number; index ++) {
        if(index % 2 == 0) {
            printf(" %d ", index);
        } else {
            printf("%d", index + 1);
        }
    }
    printf("\n");

    return 0;
}

