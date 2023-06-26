#include <stdio.h>

int is_ramanujan(int val)
{
    int count = 0;
    
    for (int i = 1; i * i * i < val; i++)
        for (int j = i; i * i * i + j * j * j <= val; j++)
            if (i * i * i + j * j * j == val)
                ++count;
    
    return count;
}

int main(void)
{
    int val;
    
    printf("bir sayi giriniz: ");
    scanf("%d", &val);
    
    for (int i = 1729; i <= val; i++) {
        if (is_ramanujan(i))
            printf("%d ramanujan sayisi.\n", i);
    }

    return 0;
}
