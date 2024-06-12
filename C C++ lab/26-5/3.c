#include <stdio.h>
#include <stdlib.h>
int length(char string[]) 
{
    int lenght = 0, i;
    for (i = 0; string[i] != '\0'; i++) 
    {
      lenght++;
    }
    return lenght;
}
int compare_strings(char string1[], char string2[]) 
{
  int lenght1, lenght2, i, count = 0;
  lenght1 = length(string1);
  lenght2 = length(string2);
  if (lenght1 != lenght2)
    return 1;
  for (i = 0; i < lenght1; i++) 
  {
    if (string1[i] == string2[i])
      {
        count++;
      }
  }
  if (count == lenght1)
  {
    return 0;
  } 
  return 1;
}

void strings_concatenation(char string1[], char string2[]) 
{
  int i, lenght1, lenght2;
  lenght1 = length(string1);
  lenght2 = length(string2);
  for (i = lenght1; i < lenght1 + lenght2; i++) 
  {
    string1[i] = string2[i - lenght1];
  }
  string1[i] = '\0';
}

int main(void) 
{
  char string1[20], string2[20];
  int choice;
  while (1) {
    printf("\n1. String lenght \n2. String comparision   \n3. String concatenate \n4. Quit\n");
    printf("Enter your choice: ");
    scanf("%d", & choice);
    switch (choice) 
    {
    case 1:
      printf("Enter string: ");
      scanf("%s", string1);
      printf("The length of string is %d", length(string1));
      break;
    case 2:
      printf("Enter 1st strings: ");
      scanf("%s", string1);
      printf("Enter 2nd strings: ");
      scanf("%s", string2);
      if (compare_strings(string1, string2) == 0) 
      {
        printf("Strings are equal");
      } 
      else 
      {
        printf("Strings are not equal");
      }
      break;
    case 3:
      printf("Enter 1st strings: ");
      scanf("%s", string1);
      printf("Enter 2nd strings: ");
      scanf("%s", string2);
      strings_concatenation(string1, string2);
      printf("The concatenated string is: %s", string1);
      break;
    case 4:
      exit(0);
    }
  }
  return 0;
}