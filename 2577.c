#include <stdio.h>
#include <string.h>

int main(void) {
  int a, b, c, m, i, j;
  char ms[1024];
  char x;
  int cnt[10] = {0,0,0,0,0,0,0,0,0,0};
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  
  m = a * b * c;

  sprintf(ms, "%d", m);
  for (i = 0; i < strlen(ms); i++) {
    for (j = 0; j < 10; j++) {
      x = j + 48;
      if (ms[i] == x) {
        cnt[j] += 1;
      }
    }
  }
  for (i = 0; i < 10; i++) {
    printf("%d\n", cnt[i]);
  }  
  

  return 0;
}
