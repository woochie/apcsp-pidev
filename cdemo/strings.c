#include <stdio.h>
#include <string.h>

int main(void) 
{
  char stringOne[26];
  for (int i = 0; i < 26; i++)
  {
    stringOne[i] = 97 + i;
  }
  char stringTwo [] = "abcdefghijklmnopqrstuvwxyz";
  if (strcmp(stringOne, stringTwo) == 0)
     printf("It is identical\n");
  else
     printf("It is not identical for lowercase\n");
  for (int i = 0; i < 26; i++)
  {
    stringTwo[i] = stringOne[i] - 32;
  }
  if (strcmp(stringOne, stringTwo) == 0)
     printf("Comparing and changing did not happen\n");
  else
     printf("Comparing and changing did happen\n");
  
  char stringThree[52];
  strcpy(stringThree, stringOne);
  strcat(stringThree, stringTwo);
  printf("Lowercase: %s\n", stringOne);
  printf("Uppercase: %s\n", stringTwo);
  printf("Both of them: %s\n", stringThree);
}
