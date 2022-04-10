#include <stdio.h>

void biggest2()
{
  int num1, num2;

  printf ("\nEnter two numbers: ");
  scanf ("%d %d", &num1, &num2);

  if (num1 == num2)
      printf("both are equal");
  else if (num1 > num2)
      printf("%d is greater", num1);
  else
      printf("%d is greater", num2);

 // return 0;
}
