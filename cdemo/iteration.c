#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand (time(NULL));
  int div = rand();
  for (int i = 1; i <= 100; i++)
  {
    if (div % i == 0)
    {
      printf("%d\n",i);
    }
  }
}
