#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char word[128] = {0,};
    int word_len, answer, i;

    scanf("%s", word);
    word_len = strlen(word);
    answer = word_len;

    for (i = 0; i < word_len; i++) {
        if (word[i] == 'c') {
            if (word[i+1] == '=' || word[i+1] == '-') {
                answer -= 1;
                i++;
            }
        } else if (word[i] == 'd') {
            if (word[i+1] == 'z') {
                if (word[i+2] == '=') {
                    answer -= 2;
                    i += 2;
                }
            } else if (word[i+1] == '-') {
                answer -= 1;
                i++;
            }
        } else if (word[i] == 'l') {
            if (word[i+1] == 'j') {
                answer -= 1;
                i++;
            }
        } else if (word[i] == 'n') {
            if (word[i+1] == 'j') {
                answer -= 1;
                i++;
            }
        } else if (word[i] == 's') {
            if (word[i+1] == '=') {
                answer -= 1;
                i++;
            }
        } else if (word[i] == 'z') {
            if (word[i+1] == '=') {
                answer -= 1;
                i++;
            }
        }
    }
    printf("%d\n", answer);

    return 0;
}
