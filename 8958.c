#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int n, i, j, score, a;
  char arr[1024];
  int scoreArr[1024];
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    score = 0;
    a = 0;
    scanf("%s", arr);
    for (j = 0; j < strlen(arr); j++) {
      if (arr[j] == 'O') {
        score += 1 + a;
        a += 1;
      } else {
        a = 0;
      }
    }
    scoreArr[i] = score;
  }
  for (i = 0; i < n; i++) {
    printf("%d\n", scoreArr[i]);
  }

  return 0;
}
