#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_words(char *s) {
   size_t s_len;
   int i, count;
   count = 1;
   s_len = strlen(s);
   for (i = 0; i < s_len; i++) {
       if (s[i] == 0x20) {
            count += 1;
       }
   }
   if (s[0] == 0x20) {
       count -= 1;
   }
   if (s[s_len-1] == 0x20) {
       count -= 1;
   }
   printf("%d\n", count);

   return 0;
}

int main(void) {
    char buf[1000001];
    memset(buf, 0, sizeof(buf));
    
    scanf("%[^\n]", buf);
    count_words(buf);

    return 0;
}
