// 02 - 014: LŨY THỪA NHANH
#include <stdio.h>
int main() {
    short a, b, t;
    long long p;
    scanf("%hd", &t);
    for (int i = 1; i <= t; i++) {
        p = 1;
        scanf("%hd %hd", &a, &b);
        for (short n = 1; n <= b; n++) {
            p *= 1LL * a;
        }
        printf("%lld\n", p);
    }
    return 0;
}