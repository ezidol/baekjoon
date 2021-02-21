#include <stdio.h>

int func(unsigned long long n) {
    
    return n*n -n + 1;
}

int main(void) {
    unsigned long a, x, y, n, d, r, c;
    scanf("%lu", &c);
    for (int i = 0; i < c; i++) {
        scanf("%lu", &x);
        scanf("%lu", &y);
        n = 1;
        a = y - x;
        if (a <= 1) {
            printf("%d\n", 1);
        } else {
            while(1) {
                if (a >= func(n) && a < func(n+1)) {
                    d = func(n+1) - func(n);
                    if (a >= (func(n) + (d / 2))) {
                        r = n * 2;
                    } else {
                        r = n * 2 - 1;
                    }
                    break;
                }
                n++;
            }
            printf("%ld\n", r);
        }
    }
    
    return 0;
}
