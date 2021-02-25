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
    int pns[10000];
    int i, j, M, N, sum;
    scanf("%d", &M);
    scanf("%d", &N);
    j = 0;
    sum = 0;
    for (i = M; i <= N; i++) {
        if (isPrimeNum(i)) {
            pns[j] = i;
            j++;
        }
    }
    for (i = 0; i < j; i++) {
        sum += pns[i];
    }
    if (sum == 0) {
        printf("%d\n", -1);
        return 0;
    }
    printf("%d\n", sum);
    printf("%d\n", pns[0]);

    return 0;
}
