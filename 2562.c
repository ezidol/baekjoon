#include <stdio.h>

int main(void) {
    int arr[9], i, j, x, max, loc;
    for (i = 0; i < 9; i++) {
        scanf("%d", &x);
        arr[i] = x;
    }
    loc = 1;
    max = arr[0];
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 9; j++) {
            if (max < arr[j]) {
                max = arr[j];
                loc = j + 1;
            }
        }    
    }
    printf("%d\n", max);
    printf("%d\n", loc);
    
    return 0;
}
