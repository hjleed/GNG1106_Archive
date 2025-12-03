int main() {
  int x = 10;
  float y = 1.3f;
  char z = 'p';

  // Pointer declaration and initialization
  int * ptr_x = & x;
  float * ptr_y = & y;
  char * ptr_z = & z;

  // Printing the values
  printf("Value of x = %d\n", * ptr_x);
  printf("Value of y = %f\n", * ptr_y);
  printf("Value of z = %c\n", * ptr_z);


  printf("address of x = %p\n", ptr_x);
  printf("address of y = %p\n", ptr_y);
  printf("address of z = %p\n", ptr_z);

  return 0;
}
