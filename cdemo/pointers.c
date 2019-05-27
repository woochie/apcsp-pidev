#include <stdio.h>

int main()
{

  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);
  
  float d = 1.2;
  float* ptrtod = &d;

  float e = 6.5;
  float* ptrtoe = &e;

  printf("The value of d is %f\n", *ptrtod);
  printf("The address that d is at %d\n", ptrtod);
  printf("The value of e is %f\n", *ptrtoe);
  printf("The address that e is at %d\n", ptrtoe);

  float new = e;
  e = d;
  d = new;

  printf("The new d is %f\n",d);
  printf("The new e is %f\n",e);
}
