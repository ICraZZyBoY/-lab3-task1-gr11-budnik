/**
Created by Kirill Budnik

void split_string(const char *input, char *evenIndexes, char *oddIndexes) -
splits string into two strings, one with even indexes and one with odd indexes
**/
#include "split_string.h"

/**
void split_string(const char *input, char *evenIndexes, char *oddIndexes) -
splits input string into two strings, one with even indexes (evenIndexes) and one with odd indexes (oddIndexes)
**/
void split_string(const char *input, char *evenIndexes, char *oddIndexes) 
{
  int evenIndex = 0;
  int oddIndex = 0;
  int inputIndex = 0;
  for (int i = 0; i < strlen(input); i++) 
  {
    if (input[i] != ' ') 
    {
      if (inputIndex % 2 == 0) 
        evenIndexes[evenIndex++] = input[i];
      else 
        oddIndexes[oddIndex++] = input[i];
      inputIndex++;
    }
  }

  // Null-terminate the strings
  evenIndexes[evenIndex] = '\0';
  oddIndexes[oddIndex] = '\0';
}
