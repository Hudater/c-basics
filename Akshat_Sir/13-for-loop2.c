#include <stdio.h>

void main()
{
  int N, sum=0, i;
  for (i=1; i<=10; i++)
  {
    printf("enter a number");
    scanf("%d", &N);
    sum=sum+N;
  }
  printf("The sum of no. is %d", sum);
}
