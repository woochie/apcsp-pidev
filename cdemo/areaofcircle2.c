#include <stdio.h>

float areaOfCircle(float rad) 
{
  float area = (3.14159265358979323846 * rad * rad);
  return area;
}

int main(int argc, char* argv[])
{
 if (argc != 3)
  {
    printf("%s : expected 2 args, please enter two floats\n", argv[0]);
    return 1;
  }
  
  float first;
  int found = sscanf(argv[1], "%f", &first);
  if (found != 1)
    {
	printf("Not a decimal, enter two floats\n");
	return 1;
    }

  float second;
  found = sscanf(argv[2], "%f", &second);
  if (found != 1)
    {
	printf("Second not a decimal, enter two floats\n");
	return 1;
    }
  for (float rad = first; rad <= second; rad++)
    {
	float result = areaOfCircle(rad);
	printf("Area at r = %f: %f\n", rad, result);
    }
}
