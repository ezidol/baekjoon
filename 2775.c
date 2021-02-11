#include <stdio.h>

int count_resi(int k, int n) {
    if (k == 0) {
        return n;
    }
    int i, persons;
    persons = 0;
    
    for (i = 1; i <= n; i++) {
        persons += count_resi(k-1, i);
    }

    return persons;
}

int main(void) {
    int T, i, a, b;
    scanf("%d", &T);
    
    for (i = 0; i < T; i++) {
        scanf("%d", &a);
        scanf("%d", &b);

        printf("%d\n", count_resi(a,b));

    }

    return 0;
}
