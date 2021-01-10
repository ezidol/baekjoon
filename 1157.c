#include <stdio.h>
#include <string.h>

int main(void) {
  char word[1000001];
  int count[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0};
  int len;
  int max = 0;
  int n = 0;
  char alphabet;
  scanf("%s", word);
  len = strlen(word);
  for (int i = 0; i < len; i++) {
    if (word[i] < 91) {
      count[word[i]-65] += 1;
    } else {
      count[word[i]-97] += 1;
    }
  }
  for (int i = 0; i < 26; i++) {
    if (max < count[i]) {
      max = count[i];
    }
  }
  for (int i = 0; i < 26; i++) {
    if (count[i] == max) {
      n += 1;
      alphabet = i + 65;
    }
  }
  if (n == 1) {
    printf("%c\n", alphabet);   
  } else if (n > 1) {
    printf("?\n");
  }

  return 0;
}
