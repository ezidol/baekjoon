#include <stdio.h>
#include <string.h>

int main(void) {
  int n, count, i, j, k;
  char word[21];
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &count);
    scanf("%s", word);
    for (j = 0; j < strlen(word); j++) {
      for (k = 0; k < count; k++) {
        printf("%c", word[j]);
      }      
    }
    printf("\n");
  }
  
  return 0;
}
