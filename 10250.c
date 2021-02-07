#include <stdio.h>

int main(void) {
    unsigned long i, T, H, W, N, X, Y;
    scanf("%lu", &T);
    for (i = 0; i < T; i++) {
        scanf("%lu", &H);
        scanf("%lu", &W);
        scanf("%lu", &N);

        X = (N % H) * 100;
        Y = (N / H) + 1;
        if (N % H == 0) {
            X = H * 100;
            Y -= 1;
        }
        printf("%lu\n", X+Y);
    }

    return 0;
}
