#include "../main.h"
#include <stdio.h>
#include <assert.h>

int main(void)
{
  int writtenBytes;
  int writtenBytesOrigin;

  printf("test");

  writtenBytes = _printf("I am %d years old.", 10); /* I am 10 years old */
  writtenBytesOrigin = printf("I am %d years old.", 10);
  assert(writtenBytes == writtenBytesOrigin);

  writtenBytes = _printf("I am %%d years old."); /* I am %d years old */
  writtenBytesOrigin = printf("I am %%d years old.");
  assert(writtenBytes == writtenBytesOrigin);

  return (0);
}