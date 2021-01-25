#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void) {
    int n, i, j, word_len, answer;
    char word[128];
    int cnt[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    answer = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", word);
        word_len = strlen(word);
        for (j = 0; j < word_len; j++) {
            if (cnt[word[j] - 0x61] > 0) {
                if (word[j] - 0x61 != word[j-1] -0x61) {
                    break;
                }
            }
            cnt[word[j] - 0x61] += 1;
            if (j == word_len - 1) {
                answer += 1;
            }
        }
        memset(cnt, 0, sizeof(cnt)); 
    }
    printf("%d\n", answer);

    return 0;
}
