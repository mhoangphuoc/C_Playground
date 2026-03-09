// 02 - 015: TỔNG CÁC BỘI SỐ CỦA 3
#include <stdio.h>
int main() {
    int n;
    long long s;
    scanf("%d", &n);
    s = 3LL * (n/3) * ((n/3) + 1) / 2;
    printf("%lld\n", s);
    return 0;
}