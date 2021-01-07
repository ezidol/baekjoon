#include <stdio.h>

int main(void) {
  int size;
  char str_n[1024];
  int sum = 0;
  scanf("%d", &size);
  scanf("%s", str_n);

  for (int i = 0; i < size; i++) {
    sum += str_n[i] - 48;
  }
  printf("%d\n", sum);
  
  return 0;
}
