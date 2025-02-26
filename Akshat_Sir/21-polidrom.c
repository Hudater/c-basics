#include <stdio.h>

void main()
{
  int num,n,rev=0,org;
  printf("Enter a number");
  scanf("%d", &num);
  org=num;
  while (num !=0)

  {
    n=num%10;
    rev=rev*10+n;
    num=num/10;

    if(rev==org)
    printf ("no. is polidrom");
    
    else
    {
      printf ("no. is not polidrom");
    }
    
  }
}