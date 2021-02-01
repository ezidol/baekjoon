#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int X, min, max, i, a, b, c;
    scanf("%d", &X);
    i = 0;
    while(1) {
        i++;
        min = 1 + i*(i-1) / 2;
        max = 1 + i*(i+1) / 2;
        if (X >= min && X < max) {
            break;
        }
    }
    if (i % 2 == 1) {
        a = i;
        b = 1;
        c = X - min;
        a -= c;
        b += c;

        printf("%d/%d\n", a, b);
    } else {
        a = 1;
        b = i;
        c = X - min;
        a += c;
        b -= c;

        printf("%d/%d\n", a, b);
    }

    return 0;
}
