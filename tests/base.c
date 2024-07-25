#include "../main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <assert.h>

int writtenBytes, writtenBytesOrigin = 0;

#define CHECK(a, ...)                                                    \
  writtenBytes = _printf(a, ##__VA_ARGS__);                              \
  writtenBytesOrigin = printf(a, ##__VA_ARGS__);                         \
  printf("_printf: %d, printf: %d\n", writtenBytes, writtenBytesOrigin); \
  assert(writtenBytes == writtenBytesOrigin)

void test_default(void)
{
  CHECK("I am 15 years old\n");
  CHECK("Hello world !\n");
  CHECK("Hello %% world !\n");
  CHECK("Hello world !%");
  CHECK("[%r %r]\n");
  CHECK("[%r]\n");
  CHECK("[%%]\n");
  CHECK("[%]");
  CHECK("[%%%% %%]\n");
  CHECK("");
  CHECK("test \0 t");
}

void test_character(void)
{
  CHECK("Character: %c\n", 'a');
  CHECK("Character: %c\n", '4');
  CHECK("Character: %c\n", '%');
  CHECK("Character: %%%c\n", 'a');
}

void test_integer(void)
{
  CHECK("Integer: %d\n", 0);
  CHECK("Integer: %d\n", 8);
  CHECK("Integer: %d\n", 249);
  CHECK("Integer: %d\n", 38943);
  CHECK("Integer: %d\n", 2147483647);
  CHECK("Integer: %d\n", -3);
  CHECK("Integer: %d\n", -343);
  CHECK("Integer: %d\n", -34892);
  CHECK("Integer: %d\n", -2147483647);
  CHECK("Integer: %d\n", -0);
  CHECK("Integer: %d\n", INT_MAX);
  CHECK("Integer: %d\n", INT_MIN);

  CHECK("Integer: %i\n", 0);
  CHECK("Integer: %i\n", 8);
  CHECK("Integer: %i\n", 249);
  CHECK("Integer: %i\n", 38943);
  CHECK("Integer: %i\n", 2147483647);
  CHECK("Integer: %i\n", -3);
  CHECK("Integer: %i\n", -343);
  CHECK("Integer: %i\n", -34892);
  CHECK("Integer: %i\n", -2147483647);
  CHECK("Integer: %i\n", -0);
  CHECK("Integer: %i\n", INT_MAX);
  CHECK("Integer: %i\n", INT_MIN);
}

void test_string(void)
{
  CHECK("String: %s\n", "Hello my friend !");
  CHECK("String: %s\n", "a");
  CHECK("String: %s\n", "1783");
  CHECK("String: %s\n", NULL);
}

void test_binary(void)
{
  _printf("unsigned int: %b\n", 6);
  _printf("unsigned int: %b\n", 250);
  _printf("unsigned int: %b\n", 786747);
}
void test_global(void)
{
  CHECK("%c, %s, %d, %i\n", 'a', "hello, world !", 3829, 242);
  CHECK("%c, %s, %d, %i\n", 't', "jidgio78379>FD", -3829, 2);
  CHECK("%c, %%%s, %d, %i\n", '3', "£¨%%-_()", 38768429, 42);
  CHECK('\0');
  CHECK(NULL);
}

int main(void)
{
  test_default();
  printf("---------------------------------------------------------------------------\n");
  test_character();
  printf("---------------------------------------------------------------------------\n");
  test_integer();
  printf("---------------------------------------------------------------------------\n");
  test_string();
  printf("---------------------------------------------------------------------------\n");
  test_binary();
  printf("---------------------------------------------------------------------------\n");
  test_global();

  return (0);
}