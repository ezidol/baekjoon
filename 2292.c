#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    unsigned long N, max, min;
    int i;
    scanf("%lu", &N);
    if (N == 1) {
        printf("%d\n", 1);
        return 0;
    }
    i = 0;
    while(1) {
        i++;
        max = 3*i*i - 9*i + 8;
        min = 3*(i+1)*(i+1) - 9*(i+1) + 8;

        if (max <= N && min > N) {
            break;
        }
    }    
    printf("%d\n", i);

    return 0;
}
