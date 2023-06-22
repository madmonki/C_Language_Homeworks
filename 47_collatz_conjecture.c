#include <stdio.h>

unsigned int display_collatz(unsigned long long val)
{
    int counter = 0;
    while (val != 1) {
        if (val % 2 == 0)
            val = val / 2;
        else
            val = 3 * val + 1;
        printf("%lld ", val);
        counter++;
    }
    return ++counter;
}

int main(void)
{
	unsigned long long x;
	printf("pozitif bir tam sayi giriniz: ");
	scanf("%lld", &x);
	
	unsigned y = display_collatz(x);
	
	printf("%u", y);
}