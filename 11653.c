#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int divide(int a) {
    for (int i = 2; i <= a; i++) {
        if (a % i == 0) {
            return i;
        }
    }
}

int main(void) {
    int a, x, s;
    scanf("%d", &a);
    if (a == 1) {
        return 0;
    }
    
    while (1) {
        x = divide(a);
        s = a / x;
        printf("%d\n", x);
        if (a == x) {
            break;
        }
        a = s;
    }
    return 0;
}
