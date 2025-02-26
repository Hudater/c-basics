#include <stdio.h>

void main()
{
  int num,n,arm=0,org;
  printf("Enter a number");
  scanf("%d", &num);
  org=num;
  while(num !=0)
  {
    n=num%10;
    arm=arm+(n*n*n);
    num=num/10;

    if(arm==org)
    {
      printf ("no. is armstrong");
    }
    else
    {
      printf ("no. is not armstrong");
    }
    
  }
}