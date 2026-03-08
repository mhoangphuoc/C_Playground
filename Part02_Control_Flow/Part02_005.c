// 02 - 005: TỔNG ĐAN DẤU
#include <stdio.h>
int main() {
    long long n, s;
    scanf("%lld", &n);
    s = (n % 2 == 0) ? (n / 2) : (- (n + 1) / 2);
    printf("%lld", s);
    return 0;
}