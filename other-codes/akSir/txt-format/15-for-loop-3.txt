#include <stdio.h>
#include <conio.h>

void main()
{
  int n,i;
  long int fact=1;
  printf ("Enter any number")
  scanf ("%d"&n);
  for (i=1; i<=n; i++)

  {
    fact=fact*i;
  }

  printf ("The factorial od %d is %ld",n,fact);

getch();
}