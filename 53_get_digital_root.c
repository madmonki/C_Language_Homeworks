#include <stdio.h>
#include <stdlib.h>


int get_digital_root(int val)
{
  int sum = 0;

  while (val)
  {
    sum += val % 10;
    val /= 10;
  }
  
  if (sum >= 10)
    return get_digital_root(sum);

  return sum;
}

int main(void)
{
  printf("%d's digital root is %d", 34879, get_digital_root(34879));

  return EXIT_SUCCESS;
}
