#include <stdio.h>
#include <math.h>

float areaOfCircle(float rad)
{
  float area = 3.14 * rad * rad;
  return area;
}

int main()
{
  float ans;
  for(float rad = 3.5; rad <= 12.5; rad++)
  {
    ans = areaOfCircle(rad);
    printf("The circle that has a radius of %f has an area that is equal to %f\n", rad, ans);
  
  }

}
