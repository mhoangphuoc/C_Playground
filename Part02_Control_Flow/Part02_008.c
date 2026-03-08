// 02 - 008: TỔNG LẬP PHƯƠNG
#include <stdio.h>
int main() {
    int n;
    long long s;
    scanf("%d", &n);
    s = 1LL * n * n * (n + 1) * (n + 1) / 4;
    printf("%lld", s);
    return 0;
}