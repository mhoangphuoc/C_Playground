// 02 -  009: TỔNG CÁC CHỮ SỐ
#include <stdio.h>
int main() {
    short t, sum;
    long long n;
    scanf("%hd", &t);
    for (short a = 1; a <= t; a++) {
        sum = 0;
        scanf("%lld", &n);
        do {
            sum += n % 10;
            n = n / 10;
        } while (n > 0);
        printf("%hd\n", sum);
    }
    return 0;
}