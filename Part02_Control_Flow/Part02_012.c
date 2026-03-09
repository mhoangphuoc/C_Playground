// 02 - 012: TÍCH CÁC CHỮ SỐ
#include <stdio.h>
int main() {
    long long n, p = 1;
    scanf("%lld", &n);
    do {
        p *= n%10;
        n /= 10;
    } while (n != 0);
    printf("%lld\n", p);
    return 0;
}