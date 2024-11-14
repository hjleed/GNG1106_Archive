#include <stdio.h>
#include <stdlib.h>

int main()
{
  int bytes_read;
  int nbytes = 100;    // Initial buffer size
  char *my_string;

  puts("Please enter a line of text.");

  // Allocate memory for the string (nbytes + 1 to account for the null terminator)
  my_string = (char *) malloc(nbytes + 1);
  if (my_string == NULL) {
    // Memory allocation failed
    puts("Memory allocation failed!");
    return 1;  // Exit with an error
  }

  // Read a line of text from stdin
  bytes_read = getline(&my_string, (size_t *)&nbytes, stdin);

  // Check for errors in reading
  if (bytes_read == -1) {
    puts("ERROR!");
  } else {
    puts("You typed:");
    puts(my_string);
  }

  // Free the allocated memory
  free(my_string);

  return 0;
}
