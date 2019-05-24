#include <stdio.h>

int main()
{
  int a = 0;
  int b = 0;
  // if statement to test is a is equal to b
  if (a == b)
  {
    printf("a is b\n");
  }
  else
  {
    printf("a is not b\n");
  }

  // if statement to test is a is not equal to b
  if (a != b)
  {
    printf("a is not equal to b\n");
  }
  else
  {
    printf("a is equal to b\n");
  }

  // if statement to test is a is greater than 0
  if (a > b)
  {
    printf("a is greater than b\n");
  }
  else
  {
    printf("a is less than b\n");
  }
  // if statement to test is a is greater than or equal to b
  if (a >= b)
  {
    printf("a is greater than or equal to b\n");
  }
  else
  {
    printf("a is lesser than or equal to b\n");
  }

  // if statement to test is a is equal to 0 AND b is equal to 0
  if (a == 0 && b == 0)
  {
    printf("a is equal to 0\n AND b is equal to 0\n");
  }
  else
  {
    printf("a is not equal to 0\n AND b is equal to 0\n");
  }

  // if statement to test is a is equal to 0 OR  b is equal to 0
  if (a == 0 || b == 0)
  {
    printf("a is equal to 0\n OR b is equal to 0\n");
  }
  else
  {
    printf("a is not equal to 0\n OR b is equal to 0\n");
  }

  // if statement to test is a is NOT equal to 0
  if (!(a == 0))
  {
    printf("a is not equal to 0\n");
  }
  else
  {
    printf("a is equal to 0\n");
  }

}
