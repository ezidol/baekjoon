#include <stdio.h>

int main(void) {
    int h, m;
    scanf("%d %d", &h, &m);

    int total_m = h * 60 + m;
    int result = total_m -45;
    
    if (result == 1440) {
        result = 0;
    }

    if (result < 0) {
        result = 1440 + result;
    }

    int result_h = result / 60;
    int result_m = result % 60;

    printf("%d %d", result_h, result_m);
    
    return 0;
}
