#include <stdio.h>
#include <stdlib.h>

#define SIZE 100000

int factorial(int num)
{
    if (num == 1)
        return 1;

    int mltp = 1;
    while (num)
        mltp *= num--;
    
    return mltp;
}

int is_factorion(int val)
{
    int temp, valtemp = val, sum = 0;

    while (val) {
        temp = val % 10;
        sum += factorial(temp);
        val /= 10;
    }

    if (valtemp == sum)
        return 1;
    
    return 0;
}

int main(void)
{
    for (int i = 1; i <= SIZE; ++i) {
        if (is_factorion(i))
            printf("%d is a factorion.\n", i);
    }

    return EXIT_SUCCESS;
}