#include <stdio.h>

int is_prime(int val)
{
    if (val == 1)
        return 0; 
    
    if (val == 2)
        return 1;
    
    for (int i = 2; i <= val / 2; i++) {
        if (val % i == 0)
            return 0;
    }
    
    return 1;
}

int is_superprime(int val)
{
    if (!is_prime(val))
        return 0;
    
    int counter = 1;
       
    for (int i = 3; i <= val; i++) {
        if (is_prime(i))
            ++counter;
    }
    printf("counter: %d\n", counter);
    return is_prime(counter);
}

int main()
{
    int x;
    scanf("%d", &x);
    
    printf("%d", is_superprime(x));
    
    return 0;
}
