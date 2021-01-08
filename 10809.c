#include <stdio.h>
#include <string.h>

void search(char *word, int len) {
  int count[26] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
  
  for (int i = 0; i < len; i++) {
    if (count[word[i]-97] == -1) {
      count[word[i]-97] = i;
    }
  }
  for (int i = 0; i < 26; i++) {
    printf("%d ", count[i]);
  }
  
}

int main(void) {
  char word[128];
  scanf("%s", word);
  int len = strlen(word);
  search(word, len);

  return 0;
}
