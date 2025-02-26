#include <stdio.h>

int main()
{
  int num, pwOf, result, i;

  printf("Enter a number to find power off: ");
  scanf("%d",&num);

  printf("Find power of %d upto: ",num);
  scanf("%d",&pwOf);

  result=num;

  for (i=1; i<pwOf; i++)
  {
    result=result*num;
  }

  printf("%d to the power %d= %d\n", num, pwOf, result);

  return 0;
}