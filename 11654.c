#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ascii(char c) {
  int n = c;
  return n;
}

int main(void) {
  char c;
  scanf("%c", &c);
  printf("%d\n", ascii(c));
  
  return 0;
}
