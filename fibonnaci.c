#include <stdio.h>

int fibonnacci(int number)
{
    if (number == 0)
    {
        return 0;
    }
    if (number == 1)
    {
        return 1;
    }
    return fibonnacci(number - 1) + fibonnacci(number - 2);
}

int main()
{
    int fibonnacciNumber;
    printf("informe o numero para o fibonnacci\n");
    scanf("%d", &fibonnacciNumber);
    
    int result = fibonnacci(fibonnacciNumber);
    printf("fibonacci de (%d), é %d.\n",fibonnacciNumber, result);
    return 0;
};