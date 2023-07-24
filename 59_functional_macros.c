#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define is_upper(x) isupper(x)
#define to_upper(x) toupper(x)

#define max3(a, b, c) (a < b ? b < c ? c : b : a < c ? c : a)
#define max4(a, b, c, d) max3(a, b, c) < d ? d : max3(a, b, c)

#define clamp(val, low, high) (val <= low ? low : val >= high ? high : val)

#define is_triangle(a, b, c) (a + b > c && a + c > b && b + c > a ? 1 : 0)


int main(void)
{
    printf("%d", is_upper('a'));
    printf("%c", to_upper('a'));
    printf("%d", max3(5,4,3));
    printf("%d", max4(4,5,6,3));
    printf("%d", clamp(2,1,3));
    printf("%d", is_triangle(5,4,3));

    return 0;
}
