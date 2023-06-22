#include <stdio.h>

int main(void)
{
	int x, y, z;

	printf("uc tamsayi giriniz: ");
	scanf("%d%d%d", &x, &y, &z);
	
	
    if (x == y) {
        if (y == z)
            printf("%d = %d = %d",x,y,z);
        else if (x < z)
            printf("%d = %d < %d",x,y,z);
        else 
            printf("%d < %d = %d",z,x,y);
    }
    else if (x == z) {
        if (x < y)
            printf("%d = %d < %d",x,z,y);
        else
            printf("%d < %d = %d",y,x,z);
    }
    else if (y == z) {
        if (y < x)
            printf("%d = %d < %d",z,y,x);
        else
            printf("%d < %d = %d",x,y,z);
    }
    else if (x < y) {
        if (x < z)
            if (y < z)
                printf("%d < %d < %d",x,y,z);
            else
                printf("%d < %d < %d",x,z,y);
        else
            printf("%d < %d < %d",z,x,y);
    }
    else {
        if (x < z)
            printf("%d < %d < %d",y,x,z);
        if (z < x)
            printf("%d < %d < %d",y,z,x);
        else
            printf("%d < %d < %d",z,y,x);
    }
}