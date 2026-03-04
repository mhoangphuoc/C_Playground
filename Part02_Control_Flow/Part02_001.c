// 02 - 001: TỔNG DÃY SỐ TỰ NHIÊN
// HEADER FILES
#include <stdio.h>
// MAIN FUNCTION
int main() {
    // DECLARATION
    int n;
    long long s;
    // INPUT
    scanf("%d", &n);
    // PROCESSING
    s = 1LL * n * (n + 1) / 2;
    // OUTPUT
    printf("%lld", s);
    return 0;
}
