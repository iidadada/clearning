#include <stdio.h>

int main(int argc, int *argv)
{
  int element_count = 12;
  int ints[element_count];
  char *strings[element_count];

  ints[0] = puts("a");
  ints[1] = fputs("b\n", stdout);
  ints[2] = putc(99, stdout);
  ints[3] = putc(10, stdout);
  ints[4] = putchar(100);
  ints[5] = putchar(10);
  ints[6] = fputc(101, stdout);
  ints[7] = fputc(10, stdout);
  //let's make some errors in function parametres!
  printf("errors goes here:\n");
  ints[8] = putchar(-1);
  ints[9] = putchar(10);
  //  ints[11] = putchar(10);

  for(int i=0; i<element_count; i++) {
    strings[i] = "int%d is %d\n";
  }
  for(int i=0; i<element_count; i++) {
    printf(strings[i], i, ints[i]);
  } 
  for(int i=97; i<123; i++) {
    putchar(i);
  }
  printf("\n");
  for(int i=65; i<91; i++) {
    putchar(i);
  }
  printf("\n");
  return 0;
}
