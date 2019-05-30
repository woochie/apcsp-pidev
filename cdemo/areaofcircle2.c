#include <stdio.h>

float areaOfCircle(float rad) 
{
  float area = (3.14 * rad * rad);
  return area;
}

int main(int argc, char* argv[])
{
  int arg = 0;
  while (arg < argc)
  {
    printf("%d to %s\n", arg, argv[arg]);
    arg++;
  }
  float first, second;
  printf("Radius 1:\n");
  scanf("%f", &first);
  printf("Radius 2:\n");
  scanf("%f", &second);
  for (float rad = first; rad <= second; rad++)
    {
	float result = areaOfCircle(rad);
	printf("The area of the radius that is equal to %f is %f\n", rad, result);
    }
}
