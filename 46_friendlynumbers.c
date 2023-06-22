#include <stdio.h>

int are_friends(int number1, int number2)
{
    int temp1 = 0 ,temp2 = 0;
    for (int i = 1; i < number1; i++)
        if (number1 % i == 0)
            temp1 += i;
    for (int i = 1; i < number2; i++)
        if (number2 % i == 0)
            temp2 += i;
    if (temp1 == number2 && temp2 == number1)
        return 1;
    else
        return 0;
}

int main(void)
{
	int x, y;
	
	printf("2 tane pozitif sayi giriniz: ");
	scanf("%d%d",&x, &y);
	
	if (are_friends(x, y))
	    printf("girilen sayilar arkadastir");
    else
        printf("girilen sayilar arkadas degildir");
}