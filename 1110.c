#include <stdio.h>
#include <string.h>

int main(void) {
  char input[8], strsum[8], answer[8], *ptr;
  int N10, N1, sum, S10, S1, cnt, a, b;
  b = -1;
  scanf("%s", input);
  if (strlen(input) < 2) {
    a = input[0] -48;
  } else {
    a = (input[0] - 48) * 10 + (input[1] -48);
  }
  ptr = input;
  cnt = 0;
  while (a != b) {
    if (strlen(ptr) < 2) {
      N10 = 0;
      N1 = ptr[0] - 48;
    } else {
      N10 = ptr[0] - 48;
      N1 = ptr[1] - 48;
    }
      sum = N10 + N1;
      sprintf(strsum, "%d", sum);
      if (strlen(strsum) < 2) {
        S1 = strsum[0] - 48;
    } else {
      S10 = strsum[0] - 48;
      S1 = strsum[1] - 48;
    }
    sprintf(&answer[0], "%d", N1);
    sprintf(&answer[1], "%d", S1);
    b = N1*10 + S1;
    ptr = answer;
    cnt += 1;
  }
  printf("%d\n", cnt);

  return 0;
}
