// 02 -  013: GIAI THỪA
#include <stdio.h>
int main() {
    short n;
    long long f = 1;
    scanf("%hd", &n);
    for (int i = 1; i <= n; i++) {
        f *= 1LL * i;
    }
    printf("%lld\n", f);
    return 0;
}