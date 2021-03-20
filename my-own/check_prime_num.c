#include <stdio.h>

void main()
{
  int num, i=1, c=0;

  printf("Enter number to check if prime: ");
  scanf("%d", &num);

  while (i<=num)
  {
    if (num%i==0)
    {
      c++;
    }
    i++;
  }

  if (c==2)
  {
    printf("Prime no");
  }
  else
  {
    printf("Not prime");
  }
}