#include <stdio.h>

int main() {
    int myNumbers[] = {25, 50, 75, 100, 125};
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    int teste = sizeof(myNumbers[0]);

    for (int index = 0; index < length; index++) {
        printf(" %d ", myNumbers[index]);
    }
    printf("\n");
    printf("%d", teste);

    return 0;
}
