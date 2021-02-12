#include <stdio.h>

int main(void) {
    int x, y, N, sum, result;

    scanf("%d", &N);
    
    result = 10000;
    x = 0;
    y = 0;
    while(1) {
        if (3*x > N) {
            break;
        }
        if (((N - 3*x) % 5) == 0) {
            y = (N - 3*x) / 5;
            sum = x + y;
        } else {
            sum = -1;
        }
        if (sum != -1) {
            if (result > sum) {
                result = sum;
            }
        }
        x++;
    }
    if (result == 10000) {
        result = -1;
    }
    printf("%d\n", result);

    return 0;
}
