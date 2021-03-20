#include <stdio.h>

void main()
{
  int i=40, tab;

  while (i>=4)
  {
    tab = i/2;
    printf("%d\n", tab);
    i=i-4;
  }
}
