#include <stdio.h>

void reverseString(char name[]) {

    int length = sizeof(name) / sizeof(name[0]) - 1;

    for(int i = length; i >= 0; i--) {
        printf("%c", name[i]);
    }
      
    printf("\n");
}

char name[] = {"name"};

int main() {
    reverseString("leonardo");

    reverseString(name);
    return 0;
}
