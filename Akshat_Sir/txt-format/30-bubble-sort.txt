#include <stdio.h>
#include <conio.h>

void main()
{
  int a[5],i,j,n=3,temp;
  printf("Enter five elements of array");

  for (i=0; i<+4; i++);
  scanf ("%d",&a[i]);

  for (i=0; i<+3; i++)

  {
    for (j=0;j<=n;j++)
  {
    if (a[j]>a[j+1])
    {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
    }
  }
  n--;
}

printf("sorted first /n");
for (i=0;i<=4;i++)
printf("%d",a[i]);

getch();
}