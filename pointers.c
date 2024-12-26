#include <stdio.h>

// f2 apenas imprime o valor recebido
void f2(char **hello) {
    printf("from f2: %p\n", *hello);  // Imprime o endereço armazenado em hello
    printf("from f2:%s\n", *hello);           // Imprime o conteúdo apontado
}

// f1 modifica o conteúdo do ponteiro
void f1(char **hello) {
    printf("from f1: %p\n", *hello); // Imprime o valor original do ponteiro
    *hello = "Hello world modificado";  // Modifica o conteúdo do ponteiro
    f2(hello);                      // Passa o ponteiro para f2
}

int main() {
    char hello[] = "Hello World";  // Array de caracteres
    char *pHello = hello;          // Ponteiro para o array
    printf("from main: %p\n", &pHello); // Imprime o endereço do ponteiro
    f1(&pHello);                   // Passa o endereço do ponteiro para f1
    printf("from main: %s\n", pHello);  // Verifica a modificação
    printf("from main: %p\n", pHello);

    return 0;
}
