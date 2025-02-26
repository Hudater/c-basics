#include <stdio.h>

void main()
{
  int i,a[5],j,temp;
  printf ("Enter five elements");
  for (i=0;i<=4;i++)
  scanf("%d",& a[i]);
  for(i=0;i<=3;i++)
  {
    for(j=i+1;j<=4;j++)
    {
      if(a[i]>a[j])
      {
        temp=a[j];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  j--;
  }
printf("sorted first /n");
for (i=0;i<=4;i++);
printf("%d", a[i]);
}