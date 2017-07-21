#include <stdio.h>
#include <stdlib.h>

int main() {
  // Read File In
  static const char filename[] = "../input/1.txt";
  FILE *file;
  file = fopen (filename, "r");

  if ( file != NULL )
  {
    char line[128];
    if ( fgets( line, sizeof line , file ) != NULL )
    {
      int array_size = line[0] - '0';
      int number_array[array_size];
      int array_position = 0;
      for (int i = 0; i < array_size; i++)
      {
        char number[8];
        fscanf(file, "%s", number);
        number_array[array_position++] = atoi(number);
      }
      int sum = 0;
      for (int i = 0; i < array_size; i++)
      {
        sum = sum +  number_array[i];
      }
      printf("SUM: %i", sum);

    }
    fclose ( file );
  } else {
    perror ( filename );
  }
  return 0;
}

// LEARNINGS
// Reading a file line by line is difficult
// Printing is weird as you have to define the type
// Pointers.. something I need to become better at
// So much code for something ostensibly simple
// Needs serious refactoring
// Need to estimate the line size
// functions can't return arrays
// arrays aren't first class in c
// array size needs to be saved to local variable