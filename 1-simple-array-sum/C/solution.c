#include <stdio.h>
#include <stdlib.h>

int input[] = {1, 2, 3, 4, 10, 11};

int sum_array(int *number_array, int array_size) 
{
  int sum = 0;
  for (int i = 0; i < array_size; i++)
  {
    sum += number_array[i];
  }
  return sum;

}

int main() {
  // Read File In
  static const char filename[] = "../input/1.txt";
  FILE *file;
  file = fopen (filename, "r");
  int my_sum = sum_array(input, 6);
  printf("MY SUM: %i", my_sum);

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
      int sum = sum_array(number_array, array_size);
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
// arrays need to be passed into functions as a pointer