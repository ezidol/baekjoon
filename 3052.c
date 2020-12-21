#include <stdio.h>

int main(void) {
  int remain_cnt[42] = {
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,
    0,0
  };
  int num, i, remainder;
  int answer = 0;
  for (i = 0; i < 10; i++) {
    scanf("%d", &num);
    remainder = num % 42;
    remain_cnt[remainder] += 1;
  }
  for (i = 0; i < 42; i++) {
    if (remain_cnt[i]) {
      answer += 1;
    }
  }
  printf("%d\n", answer);


  return 0;
}
