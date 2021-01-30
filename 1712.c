#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    unsigned long A, B, C;
    int n;

    scanf("%lu", &A);
    scanf("%lu", &B);
    scanf("%lu", &C);
    
    if (B >= C) {
        n = -1;
        printf("%d\n", n);

        return 0;
    }

    n = 1;

    while (n*(C-B) <= A) {
        n *= 10;
    }
    n = n / 10;

    do { 
        n++;
    } while (n*(C-B) <= A);
    
    printf("%d\n", n);

    return 0;
}
