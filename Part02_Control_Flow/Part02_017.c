// 02 - 017: SỐ NGUYÊN TỐ CÙNG NHAU
#include <stdio.h>
int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    printf("%s", a == 1 ? "YES\n" : "NO\n");
    return 0;
}