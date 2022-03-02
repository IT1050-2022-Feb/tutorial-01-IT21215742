/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

/*#include <stdio.h>

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}*/

#include <stdio.h>

int max(int no1, int no2);
int min(int no1, int no2);
int multi(int no1, int no2);

int main()
{
  int no1, no2, maximum, minimum, multiply;

  printf("Enter a value of No 1 : ");
  scanf("%d", &no1);
  printf("Enter a value of No 2 : ");
  scanf("%d", &no2);

  maximum = max(no1, no2);
  minimum = min(no1, no2);
  multiply = multi(no1, no2);

  printf("\nMaximun Number : %d", max(no1, no2));
  printf("\nMinimum Number : %d", min(no1, no2));
  printf("\nMultiply : %d", multi(no1, no2));

  return 0;
}
int max(int no1, int no2)
{
  if(no1 > no2)
  {
    return no1;
  }
  else
  {
    return no2;
  }
}

int min(int no1, int no2)
{
  if(no1 < no2)
  {
    return no1;
  }
  else
  {
    return no2;
  }
}

int multi(int no1, int no2)
{
  return no1 * no2;
}
