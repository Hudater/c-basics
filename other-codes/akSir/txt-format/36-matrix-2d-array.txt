#include <stdio.h>
#include <conio.h>

void main()
{
  int a[3][3],i,k,t[3][3];
  printf ("enter the elements");
  for (i=0;i<=2;i++)

  {
    for (j=0;j<=2;j++)
    scanf ("%d", &a[i][j]);
  }
  for (i=0;i<=2;i++)
  {
    for (j=0;j<=2; j++)
    {
      t[j][i]=a[i][j];
    }
  }

  for (i=0;i<=2;i++)
}

for (j=0;j<=2;j++)
printf ("%d", t[i][j]);
}

getch();
}