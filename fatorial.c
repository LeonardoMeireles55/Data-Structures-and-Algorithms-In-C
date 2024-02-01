#include <stdio.h>

int fatorial(int number) {
    if(number == 0 || number == 1) {
        return 1;
    } else {
        return number * (fatorial(number - 1));
    }      
}

int main() {
    int resultado = fatorial(5);
printf("fatorial de 5: %d \n", resultado);

return 0;

};