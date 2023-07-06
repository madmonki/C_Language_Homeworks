#include <stdlib.h>
#include <stdio.h>

#define UNTIL 101

int is_harshad(int val)
{ 
    int sum = 0;
    int valtemp = val;
    while (val) {
        sum += val % 10;
        val /= 10;
    }
    
    if (valtemp == 0 || valtemp % sum)
        return 0;
        
    return 1;
}

int main(void)
{
    for (int harshad_num = 1, i = 0; harshad_num != UNTIL; ++i)
    {
        if (is_harshad(i)) {
            printf("%d is %d numbered harshad number\n", i, harshad_num++);
        }
    }
    
    return EXIT_SUCCESS;
}
