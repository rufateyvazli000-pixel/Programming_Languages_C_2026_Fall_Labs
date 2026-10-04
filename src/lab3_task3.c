/*
 * Lab 3, Task 3
 * Name: <Rufat Eyvazli>
 * Student ID: <251ADB127>
 *
 * Implement basic string handling functions.
 * Write your own versions of:
 *   - my_strlen (finds string length, not counting '\0')
 *   - my_strcpy (copies string from src to dest, INCLUDING the '\0')
 *
 * Rules:
 *   - Do not include <string.h> or call any library string functions.
 *   - Use loops and manual pointer/array access.
 *   - Must work for the empty string "" (length 0).
 *   - You may assume dest is large enough (the caller guarantees it).
 *   - Do not modify main.
 *
 * Example:
 *   char s[] = "hello";
 *   int len = my_strlen(s);   // should return 5
 *
 *   char buffer[100];
 *   my_strcpy(buffer, s);     // buffer now contains "hello"
 *
 * Required output:
 *   Length: 16
 *   Copy: Programming in C
 */

#include <stdio.h>

// Function prototypes
int my_strlen(const char* str);
void my_strcpy(char* dest, const char* src);

int main(void) {
  char test[] = "Programming in C";
  char copy[100];

  int len = my_strlen(test);
  printf("Length: %d\n", len);

  my_strcpy(copy, test);
  printf("Copy: %s\n", copy);

  return 0;
}

// Implement functions below
int my_strlen(const char* str) {
  const char* start_ptr = str;

  while (*str) {
    str++;
  }

  return (int)(str - start_ptr);
}

void my_strcpy(char* dest, const char* src) {
  int pos = 0;

  while ((dest[pos] = src[pos]) != '\0') {
    pos++;
  }
}