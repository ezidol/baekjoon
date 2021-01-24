#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char word[16] = {0,};
    int seconds, len_word, i;

    seconds = 0;
    scanf("%s", word);
    len_word = strlen(word);
    for (i = 0; i < len_word; i++) {
        if (word[i] == 0x41 || word[i] == 0x42 || word[i] == 0x43) {
            seconds += 3;
        } 
        if (word[i] == 0x44 || word[i] == 0x45 || word[i] == 0x46) {
            seconds += 4;
        }
        if (word[i] == 0x47 || word[i] == 0x48 || word[i] == 0x49) {
            seconds += 5;
        }
        if (word[i] == 0x4a || word[i] == 0x4b || word[i] == 0x4c) {
            seconds += 6;
        }
        if (word[i] == 0x4d || word[i] == 0x4e || word[i] == 0x4f) {
            seconds += 7;
        }
        if (word[i] == 0x50 || word[i] == 0x51 || word[i] == 0x52 || word[i] == 0x53) {
            seconds += 8;
            }       
        if (word[i] == 0x54 || word[i] == 0x55 || word[i] == 0x56) {
            seconds += 9;
        }
        if (word[i] == 0x57 || word[i] == 0x58 || word[i] == 0x59 || word[i] == 0x5a) {
            seconds += 10;
        }
    }
    printf("%d\n", seconds);


    return 0;
}
