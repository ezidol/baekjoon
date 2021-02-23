#include <stdio.h>

int isPrimeNum(int p) {
    int x, i;
    x = p / 2;

    if (p == 1) {
        return 0;
    } else if (p < 4) {
        return 1;
    }
    for (i = 2; i <= x; i++) {
        if (!(p % i)) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int n, i, p, cnt;
    scanf("%d", &n);
    cnt = 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &p);
        if (isPrimeNum(p)) cnt++;
    }
    printf("%d\n", cnt);

    return 0;
}
