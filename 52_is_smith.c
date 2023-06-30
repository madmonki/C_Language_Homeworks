#include <stdio.h>

#define TIMES 10000

int is_prime(int p)
{
    if (p == 1)
        return 0;
    else if (p == 2)
        return 1;
    
    for (int i = 2; i <= p / 2; i++)
        if (p % i == 0)
            return 0;
            
    return 1;
}

int is_smith(int p)
{
    if (!is_prime(p)) {
        
        int c = 1;
        int sum = 0;
        int pval = p;
        int psum = 0;
        
        for (int i = 2; i <= p; i++) {
            if (is_prime(i)) {
                while (p % i == 0) {
                    p /= i;
                    c *= i;
                    if (i < 11)
                        sum += i;
                    else {
                        int temp = i;
                        while (i) {
                            sum += i % 10;
                            i /= 10;
                        }
                        i = temp;     
                    }
                }
            }
        }
        
        if (c == pval) {
            while (pval) {
                psum += pval % 10;
                pval /= 10;
            }
            if (psum == sum)
                return 1;
        }
    }
    return 0;
}

int main()
{
    for (int i = 0; i < TIMES; i++) {
        if (is_smith(i))
            printf("%d smith sayisidir.\n", i);
    }
}
