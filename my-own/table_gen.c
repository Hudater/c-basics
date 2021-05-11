#include "stdio.h"

int main()
{
  int num,upto,i,tab;

  printf("Which number's table you want?: ");
  scanf("%d",&num);

  printf("Print table upto times?: ");
  scanf("%d",&upto);

  for (i=1; i<=upto; i++)
  {
    tab=num*i;
    printf("%d times %d = %d \n",num,i,tab);
  }

  return 0;
}