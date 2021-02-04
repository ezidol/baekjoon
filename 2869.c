#include <stdio.h>

int main(void) {
    unsigned int A,B,V,n;

    scanf("%u", &A);
    scanf("%u", &B);
    scanf("%u", &V);
    n = (V-A) / (A-B);

    if ((V-A) % (A-B)) {
        n++;
    }
    
    printf("%u\n", n+1);

    return 0;
}
