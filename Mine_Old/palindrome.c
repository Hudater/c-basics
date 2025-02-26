#include "stdio.h"

int main()
{
  char input_str[100];
  char rev_str[100];
  int i,c=0,j;

  printf("Enter a word to check for palindrome: ");
  scanf("%s", &input_str);

  // checking the length of the string and storing it in var `c`
  for (i=0; input_str[i]!='\0'; i++)
  {
    c++;
  }

// putting the number of indexes of input_str in c with -1 cause string index starts with 0
// var `j` will be used to count index while reversing it
  c=c-1;
  j=c;

  // reversing the string and storing in another var `rev_str`
  for (i=0; i<=c; i++)
  {
    rev_str[i]=input_str[j];
    j--;
  }

  printf("Reversed string is: %s\n", rev_str);

// checking for palindrome via bitwise ascii evaluation
  for (i=0; c>=0; c--)
  {
    if ((int)input_str[i]==(int)rev_str[i])
    {
      printf("%d\n",(int)input_str[i]);
      i++;
    }
    else
    {
      printf("The string is not palindrome\n");
    }

    printf("The string is a palindrome\n");
  }
}