#include <stdio.h>
#include <math.h>

#define HUNDRED_MILLION 100000000
#define BILLION 1000000000

int main(void)
{
    unsigned sum, number, numbers, temp;
    for (int i = HUNDRED_MILLION; i < BILLION; ++i) {
        temp = i;
        numbers = 0;
        while (temp > 0) {
            temp /= 10;
            ++numbers;
        }
        temp = i;
        sum = 0;
        while (temp > 0) {
            number = temp % 10;
            if (number != 0)
                sum = sum + pow(number, numbers);
            temp = temp / 10;
        }
        if (sum == i)
            printf("%d sayisi bir armstrong sayisidir\n", i);
    }
    return 0;
}