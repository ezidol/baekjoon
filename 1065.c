#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hansu(int N) {
  char str_x[1024];
  int x, d_1, d_2;
  int cnt = 0;
  
  for (x = 1; x <= N; x++) {
    sprintf(str_x, "%d", x);
    int len_x = strlen(str_x);
    if (len_x <= 2) {
      cnt += 1;
    } else if (len_x == 3) {
      d_1 = str_x[1] - str_x[0];
      d_2 = str_x[2] - str_x[1];
      if (d_1 == d_2) {
        cnt += 1;
      }
    }
  }
  return cnt;
}

int main(void) {
  int N;
  scanf("%d", &N);
  printf("%d\n", hansu(N));

  return 0;
}
