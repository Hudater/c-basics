#include <stdio.h>

void main()
{
  int a[5],i,small,large;
  printf("enter the five numbers");
  for (i=0;i<=4;i++);
  scanf ("%d", & a[i]);
  small=a[0];
  large=a[0];

  for (i=0; i<=4; i++)
    {
      if (small>a[i])
        small=a[i];

      if (large<a[i])
        large=a[i];
    }
  printf("The smallest number is %d/n",small);
  printf("The largest number is %d",large);
}