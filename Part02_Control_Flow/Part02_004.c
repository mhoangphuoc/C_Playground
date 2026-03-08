// 02 - 004: TỔNG NGHỊCH ĐẢO SỐ CHẴN
#include <stdio.h>
int main() {
    int n;
    double a = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        a += 1.0/i;
    }
    double s;
    s = 0.5 * a;
    printf("%.2f", s);
    return 0;
}