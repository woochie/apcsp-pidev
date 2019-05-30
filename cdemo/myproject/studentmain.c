#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "student.h"
#define TRUE 0
#define FALSE 1

int main()
{
  char input[150];
  char ans;
  struct Student students[150];
  int a = TRUE;
  int add = 0;
  while (a == 0)
  {
    printf("Create New Student? (yes/no)");
    fgets(input, 100, stdin);
    sscanf(input, "%s", &ans);
    if (strcmp(&ans, "yes") == 0)
    {
      a = TRUE;
      char fname[150];
      char lname[150];
      int age;
      int sID;
      printf("Please Enter First Name of Student:  ");
      fgets(input, 150, stdin);
      sscanf(input, "%s", fname);
      printf("Please Enter Last Name of Student:  ");
      fgets(input, 150, stdin);
      sscanf(input, "%s", lname);
      printf("Please Enter Age of Student:  ");
      fgets(input, 150, stdin);
      sscanf(input, "%d", &age);
      printf("Please Enter Student ID of Student:  ");
      fgets(input, 150, stdin);
      sscanf(input, "%d", &sID);
      printf("\n");
      strcpy(students[add].fname, fname);
      strcpy(students[add].lname, lname);
      students[add].age = age;
      students[add].sid = sID;
      add++;
    }
    else
    {
      a = FALSE;
      for (int i = 0; i < add; i++)
      {
        printStudent(&students[i]);
      }
    }
  }

  return 0;
}
