/* memcpy function practice with strings*/
// void *memcpy(void *to, const void *from, size_t count);

/* size_t
This is the unsigned integral type
and is the result of the sizeof keyword. */

#include <stdio.h>
#include <string.h>

int main() {
  char *edward;

  /* Initial memory allocation */
  edward = (char*) malloc(15);
  strcpy(edward, "Alfred is my dad");
  printf("String:%s\nAddress:%u", edward, edward);

  /* Reallocating memory */
  edward = (char*) realloc(edward, 25);
  strcat(edward, "\n Yeah bro");
  printf("\n%s\n%s\n", edward, edward);

  printf(edward);

  return 0;
}
