#include "../main.h"
#include <stdio.h>
#include <assert.h>

int main(void)
{
  int writtenBytes;
  int writtenBytesOrigin;

  writtenBytes = _printf("I am 15 years old.\n"); /* I am 15 years old */
  writtenBytesOrigin = printf("I am 15 years old.\n");
  assert(writtenBytes == writtenBytesOrigin);

  writtenBytes = _printf("I am %d years old.\n", 10); /* I am 10 years old */
  writtenBytesOrigin = printf("I am %d years old.\n", 10);
  assert(writtenBytes == writtenBytesOrigin);

  writtenBytes = _printf("I am %%d years old.\n"); /* I am %d years old */
  writtenBytesOrigin = printf("I am %%d years old.\n");
  assert(writtenBytes == writtenBytesOrigin);

  return (0);
}