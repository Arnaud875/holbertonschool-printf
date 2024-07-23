#include "../main.h"
#include <stdio.h>
#include <assert.h>

int main(void)
{
  int writtenBytes;
  int writtenBytesOrigin;

  writtenBytes = _printf("Character: %c\n", 'a'); /* Character: a */
  writtenBytesOrigin = printf("Character: %c\n", 'a');
  assert(writtenBytes == writtenBytesOrigin);

  writtenBytes = _printf("I am 15 years old.\n"); /* I am 15 years old */
  writtenBytesOrigin = printf("I am 15 years old.\n");
  assert(writtenBytes == writtenBytesOrigin);

  writtenBytes = _printf("I am %d years old.\n", 2147483647); /* I am 10 years old */
  writtenBytesOrigin = printf("I am %d years old.\n", 2147483647);
  assert(writtenBytes == writtenBytesOrigin);

  writtenBytes = _printf("I am %s years old.\n", "test"); /* I am %d years old */
  writtenBytesOrigin = printf("I am %s years old.\n", "test");
  assert(writtenBytes == writtenBytesOrigin);

  writtenBytes = _printf("I am %%d years old.\n"); /* I am %d years old */
  writtenBytesOrigin = printf("I am %%d years old.\n");
  assert(writtenBytes == writtenBytesOrigin);

  return (0);
}