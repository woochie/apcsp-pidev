#include<stdio.h>

int main()
{
  int a = 545;
  unsigned int j = 1.23;
  short int k= 21;
  long int i = 55;
  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("int a value: %d and size: %d bytes\n", j, sizeof(j));
  printf("int a value: %d and size: %d bytes\n", k, sizeof(k));
  printf("int a value: %d and size: %d bytes\n", i, sizeof(i));
}
