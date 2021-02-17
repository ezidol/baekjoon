#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char A[10001], B[10001], result[10001];
    int sum, carry, remain, A_len, B_len, result_start, result_count, i, j;
    memset(result, 0, sizeof(result));
    scanf("%s", A);
    scanf("%s", B);
    A_len = strlen(A);
    B_len = strlen(B);
    result_count = 9999;
    i = A_len - 1;
    j = B_len - 1;
    carry = 0;
    while(1) {
        sum = (A[i] - 0x30) + (B[j] - 0x30) + carry;
        if (sum >= 10) {
            remain = sum - 10;
            carry = 1;
        } else {
            remain = sum;
            carry = 0;
        }
        result[result_count] = remain + 0x30;
        i--;
        j--;
        result_count--;
        if (i < 0 || j < 0) break;
    }
    if (i == j) {
        if (carry == 1) {
            result[result_count] = carry + 0x30;
            printf("%s\n", &result[result_count]);
        } else {
            printf("%s\n", &result[result_count+1]);
        }
    } else if (i > j) {
        while(1) {
            sum = (A[i] - 0x30) + carry;
            if (sum >= 10) {
                remain = sum - 10;
                carry = 1;
            } else {
                remain = sum;
                carry = 0;
            }
            result[result_count] = remain + 0x30;
            i--;
            result_count--;
            if (i < 0) break;
        }
         if (carry == 1) {
            result[result_count] = carry + 0x30;
            printf("%s\n", &result[result_count]);
        } else {
            printf("%s\n", &result[result_count+1]);
        }
    } else if (i < j) {
        while(1) {
            sum = (B[j] - 0x30) + carry;
            if (sum >= 10) {
                remain = sum - 10;
                carry = 1;
            } else {
                remain = sum;
                carry = 0;
            }
            result[result_count] = remain + 0x30;
            j--;
            result_count--;
            if (j < 0) break;
        }
         if (carry == 1) {
            result[result_count] = carry + 0x30;
            printf("%s\n", &result[result_count]);
        } else {
            printf("%s\n", &result[result_count+1]);
        }
    }



    return 0;
}
