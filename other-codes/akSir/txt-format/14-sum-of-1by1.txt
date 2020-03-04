#include <stdio.h>
#include <conio.h>

void main()
{
  int n,i;
  float sum;
  printf ("Enter the number of term")
  scanf ("%d"&n);
  i=1;

  do
    {
      sum=sum+1/i;
      i=i+1;
    }
  while (i<=n);
  printf ("%F"sum);

getch();
}
