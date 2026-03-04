// 02 - 002: TỔNG BÌNH PHƯƠNG
#include <stdio.h>
int main() {
    int n;
    long long s;
    scanf("%d", &n);
    s = 1ll * n * (n + 1) * (2 * n + 1) / 6;
    printf("%lld", s);
    return 0;
}
