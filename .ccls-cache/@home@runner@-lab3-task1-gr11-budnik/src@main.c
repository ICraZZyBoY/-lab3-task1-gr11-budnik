/**
Created by Kirill Budnik
Вариант 38
1. Получить из заданной строки две строки, состоящие из символов первой строки,
имеющих соответственно четные и нечетные индексы. Не учитывать пробелы в первой
строке
**/
#include "split_string.h"
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
  if (argc != 2) 
  {
    printf("Incorrect arguments\n");
    return 1;
  }

  const char *input = argv[1];
  char *evenIndexes = malloc((strlen(input) + 1) / 2 + 1);
  char *oddIndexes = malloc((strlen(input) + 1) / 2 + 1);
  split_string(input, evenIndexes, oddIndexes);

  printf("Even Indices: %s\n", evenIndexes);
  printf("Odd Indices: %s\n", oddIndexes);
  return 0;/
}
