#include <stdio.h>

double recursivePow(double number, int pow) {
    if(pow == 0) {
        return 1;
    }
    return number * recursivePow(number, pow - 1);
}

int main() {
    double result = recursivePow(5, 2);
    double result2 = recursivePow(5, 5);


    printf("%lf\n", result);
    printf("%lf\n", result2);
    return 0;
    
}