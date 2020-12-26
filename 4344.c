#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int n, i, j, stu_n, size, score, cnt;
  float avg;
  scanf("%d", &n);
  float avg_arr[n];
  for (i = 0; i < n; i++) {
    scanf("%d", &stu_n);
    int stu_arr[stu_n];
    size = sizeof(stu_arr) / sizeof(int);
    score = 0;
    avg = 0;
    cnt = 0;
    for (j = 0; j < size; j++) {
      scanf("%d", &score);
      stu_arr[j] = score;
      avg += score;
    }
    avg = avg / stu_n;
    for (j = 0; j < stu_n; j++) {
      if (stu_arr[j] > avg) {
        cnt += 1;
      }
    }
    avg_arr[i] = (float) cnt / (float) stu_n * 100;
  }
  for (i = 0; i < n; i++) {
    printf("%.3f%%\n", avg_arr[i]);
  }

  return 0;
}
