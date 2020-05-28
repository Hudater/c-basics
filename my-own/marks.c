#include <stdio.h>

void main ()
{
  float sst, cs, hin, eng, maths, science, total, max_marks, final_max_marks, perc;

  //Getting max marks per sub
  printf ("Enter the maximum marks obtainable for a single subject: ");
  scanf ("%f", &max_marks);
  final_max_marks=max_marks*6;

  //Inputting marks and finding total
  printf ("Enter obtained marks in Social Studies: ");
  scanf ("%f", &sst);

  printf ("Enter obtained marks in Computer Science: ");
  scanf ("%f", &cs);

  printf ("Enter obtained marks in Hindi: ");
  scanf ("%f", &hin);

  printf ("Enter obtained marks in English: ");
  scanf ("%f", &eng);

  printf ("Enter obtained marks in Maths: ");
  scanf ("%f", &maths);

  printf ("Enter obtained marks in Science: ");
  scanf ("%f", &science);

  total=sst+cs+hin+eng+maths+science;

  //Finding percentage
  perc=total/final_max_marks*100;

  //Outputting info
  printf ("Total marks obtained are %f out of %f and percentage is %f\n", total,max_marks,perc);
}